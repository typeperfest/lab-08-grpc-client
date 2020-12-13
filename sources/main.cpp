#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include "echo.grpc.pb.h"
#include "echo.pb.h"

using grpc::ClientContext;
using grpc::Status;
using echo::HelloRequest;
using echo::HelloResponse;
using echo::Echo;

int main(int argc, char** argv) {

  auto channel = grpc::CreateChannel("0.0.0.0:9090", grpc::InsecureChannelCredentials());
  auto client = Echo::NewStub(channel);
  HelloResponse response;
  ClientContext context;
  HelloRequest request;
  request.set_data("world");
  Status status = client->Hello(&context, request, &response);

  if (status.ok()) {
    std::cout << response.data() << std::endl;
  } else {
    return -1;
  }
}

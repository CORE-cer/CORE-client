#include <iostream>
#include <chrono>
#include <thread>

#include "ClientApp.h"
#include "App.h"
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std::chrono;

const std::string URI = "wss://your.websocket.uri";

void websocket_listener(const json& json_input) {
    std::string subscribe_message = json_input.dump();
    int message_count = 0;
    auto start_time = steady_clock::now();

    uWS::App h;

}

int main() {
    std::string URI = "wss://ws-feed.exchange.coinbase.com";

    uWS::App().get("/hello", [](auto *res, auto *req) {
        res->end("Hello World!");
    });
    std::cout << "Hello world" << std::endl;
    return 0;
}
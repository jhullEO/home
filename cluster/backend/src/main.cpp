#include <drogon/drogon.h>
#include <iostream>

int main()
{
    drogon::app().registerHandler(
        "/hello",
        [](const drogon::HttpRequestPtr& request,
            std::function<void(const drogon::HttpResponsePtr&)>&& callback) {
            auto response = drogon::HttpResponse::newHttpResponse();
            response->setBody("Hello, worldy world!");
            callback(response);
        },
        {drogon::Get}
    );
    drogon::app().addListener("0.0.0.0", 8080);
    std::cout << "Server starting on http://localhost:8080" << std::endl;
    drogon::app().run();
}
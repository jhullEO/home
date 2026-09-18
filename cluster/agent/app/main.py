from fastapi import FastAPI

from app.controllers.chat_controller import router as chat_router


app = FastAPI(
    title="Cluster Agent",
    version="0.1.0"
)

app.include_router(chat_router)


@app.get("/health")
def health():
    return {"status": "ok"}
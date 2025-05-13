class Feedback {
    private String comentario;

    public Feedback(String comentario) {
        this.comentario = comentario;
    }

    // Método para formatar o feedback como uma string
    @Override
    public String toString() {
        return comentario;
    }
}
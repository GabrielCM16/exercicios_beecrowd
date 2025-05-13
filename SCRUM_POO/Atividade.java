class Atividade {
    private String nome;
    private int capacidade;
    private ArrayList<Associado> associadosInscritos;

    public Atividade(String nome, int capacidade) {
        this.nome = nome;
        this.capacidade = capacidade;
        this.associadosInscritos = new ArrayList<>();
    }

    public boolean inscreverAssociado(Associado associado) {
        if (associadosInscritos.size() < capacidade) {
            associadosInscritos.add(associado);
            return true;
        } else {
            return false; // Capacidade da atividade atingida
        }
    }
}

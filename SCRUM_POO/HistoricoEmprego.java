// Classe para representar um histórico de emprego
class HistoricoEmprego {
    private String empresa;
    private String cargo;
    private int anoInicio;
    private int anoFim;

    public HistoricoEmprego(String empresa, String cargo, int anoInicio, int anoFim) {
        this.empresa = empresa;
        this.cargo = cargo;
        this.anoInicio = anoInicio;
        this.anoFim = anoFim;
    }

    // Método para formatar o histórico de emprego como uma string
    @Override
    public String toString() {
        return anoInicio + " - " + anoFim + ": " + empresa + " - " + cargo;
    }
}
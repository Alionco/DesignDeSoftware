parametrosCompilacao=-Wall #-Wshadow
nomePrograma=locadora
OBJS=Bicicleta.o CadastroClientes.o CadastroContratos.o CadastroSeguros.o Carro.o CatalogoBicicletas.o CatalogoCarros.o CatalogoDescricoes.o CatalogoVeiculos.o Cliente.o Contrato.o ControllerCliente.o ControllerContrato.o ControllerPagamento.o ControllerVeiculo.o DescricaoVeiculo.o Seguro.o Veiculo.o
CC=g++

all: main

#$(nomePrograma): main.o $(OBJS)
#	g++ -o $(nomePrograma) main.o $(OBJS) $(parametrosCompilacao)

# regras de ligacao
main : % :  $(OBJS) %.o
	$(CC) $^ -o $(nomePrograma)

# regras de compilação
%.o: %.cpp %.hpp
	$(CC) $(parametrosCompilacao) -c -o $@ $<
	
clean:
	-rm -f *.o

# remove tudo o que não for o código-fonte
purge: clean
	-rm -f $(nomePrograma)
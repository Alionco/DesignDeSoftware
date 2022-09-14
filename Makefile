parametrosCompilacao=-Wall -g#-Wshadow
nomePrograma=locadora

all: $(nomePrograma)

$(nomePrograma): main.o DescricaoVeiculo.o Veiculo.o Cliente.o Seguro.o Carro.o Bicicleta.o CadastroClientes.o CadastroSeguros.o CatalogoBicicletas.o CatalogoCarros.o CatalogoDescricoes.o CatalogoVeiculos.o Contrato.o CadastroContratos.o ControllerCliente.o ControllerContrato.o ControllerPagamento.o ControllerVeiculo.o  

	g++ -o $(nomePrograma) main.o DescricaoVeiculo.o Veiculo.o Cliente.o Seguro.o Carro.o Bicicleta.o CadastroClientes.o CadastroSeguros.o CatalogoBicicletas.o CatalogoCarros.o CatalogoDescricoes.o CatalogoVeiculos.o Contrato.o CadastroContratos.o ControllerCliente.o ControllerContrato.o ControllerPagamento.o ControllerVeiculo.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

DescricaoVeiculo.o: DescricaoVeiculo.hpp DescricaoVeiculo.cpp
	g++ -c DescricaoVeiculo.cpp $(parametrosCompilacao)

Veiculo.o: Veiculo.hpp Veiculo.cpp
	g++ -c Veiculo.cpp $(parametrosCompilacao)

Cliente.o: Cliente.hpp Cliente.cpp
	g++ -c Cliente.cpp $(parametrosCompilacao)

Seguro.o: Seguro.hpp Seguro.cpp
	g++ -c Seguro.cpp $(parametrosCompilacao)

Carro.o: Carro.hpp Carro.cpp
	g++ -c Carro.cpp $(parametrosCompilacao)

Bicicleta.o: Bicicleta.hpp Bicicleta.cpp
	g++ -c Bicicleta.cpp $(parametrosCompilacao)

CadastroClientes.o: CadastroClientes.hpp CadastroClientes.cpp
	g++ -c CadastroClientes.cpp $(parametrosCompilacao)

CadastroSeguros.o: CadastroSeguros.hpp CadastroSeguros.cpp
	g++ -c CadastroSeguros.cpp $(parametrosCompilacao)

CatalogoBicicletas.o: CatalogoBicicletas.hpp CatalogoBicicletas.cpp
	g++ -c CatalogoBicicletas.cpp $(parametrosCompilacao)

CatalogoCarros.o: CatalogoCarros.hpp CatalogoCarros.cpp
	g++ -c CatalogoCarros.cpp $(parametrosCompilacao)

CatalogoDescricoes.o: CatalogoDescricoes.hpp CatalogoDescricoes.cpp
	g++ -c CatalogoDescricoes.cpp $(parametrosCompilacao)

CatalogoVeiculos.o: CatalogoVeiculos.hpp CatalogoVeiculos.cpp
	g++ -c CatalogoVeiculos.cpp $(parametrosCompilacao)

Contrato.o: Contrato.hpp Contrato.cpp
	g++ -c Contrato.cpp $(parametrosCompilacao)

CadastroContratos.o: CadastroContratos.hpp CadastroContratos.cpp
	g++ -c CadastroContratos.cpp $(parametrosCompilacao)

ControllerCliente.o: ControllerCliente.hpp ControllerCliente.cpp
	g++ -c ControllerCliente.cpp $(parametrosCompilacao)

ControllerContrato.o: ControllerContrato.hpp ControllerContrato.cpp
	g++ -c ControllerContrato.cpp $(parametrosCompilacao)

ControllerPagamento.o: ControllerPagamento.hpp ControllerPagamento.cpp
	g++ -c ControllerPagamento.cpp $(parametrosCompilacao)

ControllerVeiculo.o: ControllerVeiculo.hpp ControllerVeiculo.cpp
	g++ -c ControllerVeiculo.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)
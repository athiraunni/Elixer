defmodule Foo do
    def echo do
        case IO.gets ">>> " do
            :eof -> :eof
            data -> IO.puts data
            echo
        end
    end
end

Foo.echo

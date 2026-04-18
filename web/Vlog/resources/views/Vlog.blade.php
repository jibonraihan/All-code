<h1>this is vlog page</h1>

<form action="{{ route('create') }}" method="post">
    @csrf
    <label for="">Vlog</label>
    <input type="text" name="blog">
    <label for="">writer</label>
    <input type="text" name="writer" id=""> <br>
    <input type="submit" value="submit">

</form>

<a href="{{ route('show', 1) }}">click here</a>
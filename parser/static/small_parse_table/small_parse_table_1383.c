/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1383.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6915(t_small_parse_table_array *v)
{
	v->a[138300] = 4;
	v->a[138301] = sym_arithmetic_expansion;
	v->a[138302] = sym_simple_expansion;
	v->a[138303] = sym_expansion;
	v->a[138304] = sym_command_substitution;
	v->a[138305] = 7;
	v->a[138306] = actions(3);
	v->a[138307] = 1;
	v->a[138308] = sym_comment;
	v->a[138309] = actions(7754);
	v->a[138310] = 1;
	v->a[138311] = aux_sym__simple_variable_name_token1;
	v->a[138312] = actions(7758);
	v->a[138313] = 1;
	v->a[138314] = sym_variable_name;
	v->a[138315] = actions(8087);
	v->a[138316] = 1;
	v->a[138317] = anon_sym_RBRACE3;
	v->a[138318] = state(3572);
	v->a[138319] = 1;
	small_parse_table_6916(v);
}

void	small_parse_table_6916(t_small_parse_table_array *v)
{
	v->a[138320] = sym__expansion_body;
	v->a[138321] = actions(7756);
	v->a[138322] = 2;
	v->a[138323] = anon_sym_0;
	v->a[138324] = anon_sym__;
	v->a[138325] = actions(7750);
	v->a[138326] = 7;
	v->a[138327] = anon_sym_BANG;
	v->a[138328] = anon_sym_DASH;
	v->a[138329] = anon_sym_STAR;
	v->a[138330] = anon_sym_QMARK;
	v->a[138331] = anon_sym_DOLLAR;
	v->a[138332] = anon_sym_POUND;
	v->a[138333] = anon_sym_AT;
	v->a[138334] = 11;
	v->a[138335] = actions(3);
	v->a[138336] = 1;
	v->a[138337] = sym_comment;
	v->a[138338] = actions(7760);
	v->a[138339] = 1;
	small_parse_table_6917(v);
}

void	small_parse_table_6917(t_small_parse_table_array *v)
{
	v->a[138340] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138341] = actions(7766);
	v->a[138342] = 1;
	v->a[138343] = sym_string_content;
	v->a[138344] = actions(7768);
	v->a[138345] = 1;
	v->a[138346] = anon_sym_DOLLAR_LBRACE;
	v->a[138347] = actions(7770);
	v->a[138348] = 1;
	v->a[138349] = anon_sym_DOLLAR_LPAREN;
	v->a[138350] = actions(7772);
	v->a[138351] = 1;
	v->a[138352] = anon_sym_BQUOTE;
	v->a[138353] = actions(7774);
	v->a[138354] = 1;
	v->a[138355] = anon_sym_DOLLAR_BQUOTE;
	v->a[138356] = actions(8089);
	v->a[138357] = 1;
	v->a[138358] = anon_sym_DOLLAR;
	v->a[138359] = actions(8091);
	small_parse_table_6918(v);
}

void	small_parse_table_6918(t_small_parse_table_array *v)
{
	v->a[138360] = 1;
	v->a[138361] = anon_sym_DQUOTE;
	v->a[138362] = state(3106);
	v->a[138363] = 1;
	v->a[138364] = aux_sym_string_repeat1;
	v->a[138365] = state(3218);
	v->a[138366] = 4;
	v->a[138367] = sym_arithmetic_expansion;
	v->a[138368] = sym_simple_expansion;
	v->a[138369] = sym_expansion;
	v->a[138370] = sym_command_substitution;
	v->a[138371] = 11;
	v->a[138372] = actions(3);
	v->a[138373] = 1;
	v->a[138374] = sym_comment;
	v->a[138375] = actions(7760);
	v->a[138376] = 1;
	v->a[138377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138378] = actions(7766);
	v->a[138379] = 1;
	small_parse_table_6919(v);
}

void	small_parse_table_6919(t_small_parse_table_array *v)
{
	v->a[138380] = sym_string_content;
	v->a[138381] = actions(7768);
	v->a[138382] = 1;
	v->a[138383] = anon_sym_DOLLAR_LBRACE;
	v->a[138384] = actions(7770);
	v->a[138385] = 1;
	v->a[138386] = anon_sym_DOLLAR_LPAREN;
	v->a[138387] = actions(7772);
	v->a[138388] = 1;
	v->a[138389] = anon_sym_BQUOTE;
	v->a[138390] = actions(7774);
	v->a[138391] = 1;
	v->a[138392] = anon_sym_DOLLAR_BQUOTE;
	v->a[138393] = actions(8093);
	v->a[138394] = 1;
	v->a[138395] = anon_sym_DOLLAR;
	v->a[138396] = actions(8095);
	v->a[138397] = 1;
	v->a[138398] = anon_sym_DQUOTE;
	v->a[138399] = state(3098);
	small_parse_table_6920(v);
}

/* EOF small_parse_table_1383.c */

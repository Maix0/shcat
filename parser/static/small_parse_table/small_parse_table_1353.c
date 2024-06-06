/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1353.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6765(t_small_parse_table_array *v)
{
	v->a[135300] = anon_sym_DOLLAR_LPAREN;
	v->a[135301] = actions(7772);
	v->a[135302] = 1;
	v->a[135303] = anon_sym_BQUOTE;
	v->a[135304] = actions(7774);
	v->a[135305] = 1;
	v->a[135306] = anon_sym_DOLLAR_BQUOTE;
	v->a[135307] = actions(7836);
	v->a[135308] = 1;
	v->a[135309] = anon_sym_DOLLAR;
	v->a[135310] = actions(7838);
	v->a[135311] = 1;
	v->a[135312] = anon_sym_DQUOTE;
	v->a[135313] = state(3006);
	v->a[135314] = 1;
	v->a[135315] = aux_sym_string_repeat1;
	v->a[135316] = state(3218);
	v->a[135317] = 4;
	v->a[135318] = sym_arithmetic_expansion;
	v->a[135319] = sym_simple_expansion;
	small_parse_table_6766(v);
}

void	small_parse_table_6766(t_small_parse_table_array *v)
{
	v->a[135320] = sym_expansion;
	v->a[135321] = sym_command_substitution;
	v->a[135322] = 11;
	v->a[135323] = actions(3);
	v->a[135324] = 1;
	v->a[135325] = sym_comment;
	v->a[135326] = actions(7760);
	v->a[135327] = 1;
	v->a[135328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135329] = actions(7766);
	v->a[135330] = 1;
	v->a[135331] = sym_string_content;
	v->a[135332] = actions(7768);
	v->a[135333] = 1;
	v->a[135334] = anon_sym_DOLLAR_LBRACE;
	v->a[135335] = actions(7770);
	v->a[135336] = 1;
	v->a[135337] = anon_sym_DOLLAR_LPAREN;
	v->a[135338] = actions(7772);
	v->a[135339] = 1;
	small_parse_table_6767(v);
}

void	small_parse_table_6767(t_small_parse_table_array *v)
{
	v->a[135340] = anon_sym_BQUOTE;
	v->a[135341] = actions(7774);
	v->a[135342] = 1;
	v->a[135343] = anon_sym_DOLLAR_BQUOTE;
	v->a[135344] = actions(7840);
	v->a[135345] = 1;
	v->a[135346] = anon_sym_DOLLAR;
	v->a[135347] = actions(7842);
	v->a[135348] = 1;
	v->a[135349] = anon_sym_DQUOTE;
	v->a[135350] = state(3009);
	v->a[135351] = 1;
	v->a[135352] = aux_sym_string_repeat1;
	v->a[135353] = state(3218);
	v->a[135354] = 4;
	v->a[135355] = sym_arithmetic_expansion;
	v->a[135356] = sym_simple_expansion;
	v->a[135357] = sym_expansion;
	v->a[135358] = sym_command_substitution;
	v->a[135359] = 11;
	small_parse_table_6768(v);
}

void	small_parse_table_6768(t_small_parse_table_array *v)
{
	v->a[135360] = actions(3);
	v->a[135361] = 1;
	v->a[135362] = sym_comment;
	v->a[135363] = actions(7666);
	v->a[135364] = 1;
	v->a[135365] = anon_sym_DQUOTE;
	v->a[135366] = actions(7760);
	v->a[135367] = 1;
	v->a[135368] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135369] = actions(7766);
	v->a[135370] = 1;
	v->a[135371] = sym_string_content;
	v->a[135372] = actions(7768);
	v->a[135373] = 1;
	v->a[135374] = anon_sym_DOLLAR_LBRACE;
	v->a[135375] = actions(7770);
	v->a[135376] = 1;
	v->a[135377] = anon_sym_DOLLAR_LPAREN;
	v->a[135378] = actions(7772);
	v->a[135379] = 1;
	small_parse_table_6769(v);
}

void	small_parse_table_6769(t_small_parse_table_array *v)
{
	v->a[135380] = anon_sym_BQUOTE;
	v->a[135381] = actions(7774);
	v->a[135382] = 1;
	v->a[135383] = anon_sym_DOLLAR_BQUOTE;
	v->a[135384] = actions(7844);
	v->a[135385] = 1;
	v->a[135386] = anon_sym_DOLLAR;
	v->a[135387] = state(3061);
	v->a[135388] = 1;
	v->a[135389] = aux_sym_string_repeat1;
	v->a[135390] = state(3218);
	v->a[135391] = 4;
	v->a[135392] = sym_arithmetic_expansion;
	v->a[135393] = sym_simple_expansion;
	v->a[135394] = sym_expansion;
	v->a[135395] = sym_command_substitution;
	v->a[135396] = 11;
	v->a[135397] = actions(3);
	v->a[135398] = 1;
	v->a[135399] = sym_comment;
	small_parse_table_6770(v);
}

/* EOF small_parse_table_1353.c */

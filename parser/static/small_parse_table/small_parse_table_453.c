/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_453.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2265(t_small_parse_table_array *v)
{
	v->a[45300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45301] = actions(29);
	v->a[45302] = 1;
	v->a[45303] = anon_sym_DOLLAR;
	v->a[45304] = actions(31);
	v->a[45305] = 1;
	v->a[45306] = anon_sym_DQUOTE;
	v->a[45307] = actions(35);
	v->a[45308] = 1;
	v->a[45309] = anon_sym_DOLLAR_LBRACE;
	v->a[45310] = actions(37);
	v->a[45311] = 1;
	v->a[45312] = anon_sym_DOLLAR_LPAREN;
	v->a[45313] = actions(39);
	v->a[45314] = 1;
	v->a[45315] = anon_sym_BQUOTE;
	v->a[45316] = actions(377);
	v->a[45317] = 1;
	v->a[45318] = sym_variable_name;
	v->a[45319] = actions(1256);
	small_parse_table_2266(v);
}

void	small_parse_table_2266(t_small_parse_table_array *v)
{
	v->a[45320] = 1;
	v->a[45321] = sym_file_descriptor;
	v->a[45322] = state(185);
	v->a[45323] = 1;
	v->a[45324] = sym_command_name;
	v->a[45325] = state(618);
	v->a[45326] = 1;
	v->a[45327] = sym_concatenation;
	v->a[45328] = state(1385);
	v->a[45329] = 1;
	v->a[45330] = sym_file_redirect;
	v->a[45331] = actions(1254);
	v->a[45332] = 2;
	v->a[45333] = anon_sym_LT_AMP_DASH;
	v->a[45334] = anon_sym_GT_AMP_DASH;
	v->a[45335] = state(1132);
	v->a[45336] = 2;
	v->a[45337] = sym_variable_assignment;
	v->a[45338] = aux_sym_command_repeat1;
	v->a[45339] = actions(33);
	small_parse_table_2267(v);
}

void	small_parse_table_2267(t_small_parse_table_array *v)
{
	v->a[45340] = 3;
	v->a[45341] = sym_raw_string;
	v->a[45342] = sym_number;
	v->a[45343] = sym_word;
	v->a[45344] = state(323);
	v->a[45345] = 5;
	v->a[45346] = sym_arithmetic_expansion;
	v->a[45347] = sym_string;
	v->a[45348] = sym_simple_expansion;
	v->a[45349] = sym_expansion;
	v->a[45350] = sym_command_substitution;
	v->a[45351] = actions(1252);
	v->a[45352] = 6;
	v->a[45353] = anon_sym_LT;
	v->a[45354] = anon_sym_GT;
	v->a[45355] = anon_sym_GT_GT;
	v->a[45356] = anon_sym_LT_AMP;
	v->a[45357] = anon_sym_GT_AMP;
	v->a[45358] = anon_sym_GT_PIPE;
	v->a[45359] = 4;
	small_parse_table_2268(v);
}

void	small_parse_table_2268(t_small_parse_table_array *v)
{
	v->a[45360] = actions(3);
	v->a[45361] = 1;
	v->a[45362] = sym_comment;
	v->a[45363] = actions(1575);
	v->a[45364] = 2;
	v->a[45365] = anon_sym_esac;
	v->a[45366] = anon_sym_SEMI_SEMI;
	v->a[45367] = actions(1577);
	v->a[45368] = 2;
	v->a[45369] = sym_file_descriptor;
	v->a[45370] = sym_variable_name;
	v->a[45371] = actions(1573);
	v->a[45372] = 25;
	v->a[45373] = anon_sym_for;
	v->a[45374] = anon_sym_while;
	v->a[45375] = anon_sym_until;
	v->a[45376] = anon_sym_if;
	v->a[45377] = anon_sym_case;
	v->a[45378] = anon_sym_LPAREN;
	v->a[45379] = anon_sym_LBRACE;
	small_parse_table_2269(v);
}

void	small_parse_table_2269(t_small_parse_table_array *v)
{
	v->a[45380] = anon_sym_BANG;
	v->a[45381] = anon_sym_LT;
	v->a[45382] = anon_sym_GT;
	v->a[45383] = anon_sym_GT_GT;
	v->a[45384] = anon_sym_LT_AMP;
	v->a[45385] = anon_sym_GT_AMP;
	v->a[45386] = anon_sym_GT_PIPE;
	v->a[45387] = anon_sym_LT_AMP_DASH;
	v->a[45388] = anon_sym_GT_AMP_DASH;
	v->a[45389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45390] = anon_sym_DOLLAR;
	v->a[45391] = anon_sym_DQUOTE;
	v->a[45392] = sym_raw_string;
	v->a[45393] = sym_number;
	v->a[45394] = anon_sym_DOLLAR_LBRACE;
	v->a[45395] = anon_sym_DOLLAR_LPAREN;
	v->a[45396] = anon_sym_BQUOTE;
	v->a[45397] = sym_word;
	v->a[45398] = 4;
	v->a[45399] = actions(3);
	small_parse_table_2270(v);
}

/* EOF small_parse_table_453.c */

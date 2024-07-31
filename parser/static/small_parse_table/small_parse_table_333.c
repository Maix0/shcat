/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_333.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1665(t_small_parse_table_array *v)
{
	v->a[33300] = actions(53);
	v->a[33301] = 1;
	v->a[33302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33303] = actions(55);
	v->a[33304] = 1;
	v->a[33305] = anon_sym_DOLLAR;
	v->a[33306] = actions(57);
	v->a[33307] = 1;
	v->a[33308] = anon_sym_DQUOTE;
	v->a[33309] = actions(61);
	v->a[33310] = 1;
	v->a[33311] = anon_sym_DOLLAR_LBRACE;
	v->a[33312] = actions(63);
	v->a[33313] = 1;
	v->a[33314] = anon_sym_DOLLAR_LPAREN;
	v->a[33315] = actions(65);
	v->a[33316] = 1;
	v->a[33317] = anon_sym_BQUOTE;
	v->a[33318] = actions(341);
	v->a[33319] = 1;
	small_parse_table_1666(v);
}

void	small_parse_table_1666(t_small_parse_table_array *v)
{
	v->a[33320] = sym_variable_name;
	v->a[33321] = state(189);
	v->a[33322] = 1;
	v->a[33323] = sym_command_name;
	v->a[33324] = state(602);
	v->a[33325] = 1;
	v->a[33326] = sym_concatenation;
	v->a[33327] = state(1073);
	v->a[33328] = 1;
	v->a[33329] = sym_file_redirect;
	v->a[33330] = state(823);
	v->a[33331] = 2;
	v->a[33332] = sym_variable_assignment;
	v->a[33333] = aux_sym_command_repeat1;
	v->a[33334] = actions(212);
	v->a[33335] = 3;
	v->a[33336] = sym_raw_string;
	v->a[33337] = sym_number;
	v->a[33338] = sym_word;
	v->a[33339] = state(327);
	small_parse_table_1667(v);
}

void	small_parse_table_1667(t_small_parse_table_array *v)
{
	v->a[33340] = 5;
	v->a[33341] = sym_arithmetic_expansion;
	v->a[33342] = sym_string;
	v->a[33343] = sym_simple_expansion;
	v->a[33344] = sym_expansion;
	v->a[33345] = sym_command_substitution;
	v->a[33346] = actions(965);
	v->a[33347] = 7;
	v->a[33348] = anon_sym_LT;
	v->a[33349] = anon_sym_GT;
	v->a[33350] = anon_sym_GT_GT;
	v->a[33351] = anon_sym_LT_AMP;
	v->a[33352] = anon_sym_GT_AMP;
	v->a[33353] = anon_sym_GT_PIPE;
	v->a[33354] = anon_sym_LT_GT;
	v->a[33355] = 4;
	v->a[33356] = actions(3);
	v->a[33357] = 1;
	v->a[33358] = sym_comment;
	v->a[33359] = actions(1249);
	small_parse_table_1668(v);
}

void	small_parse_table_1668(t_small_parse_table_array *v)
{
	v->a[33360] = 1;
	v->a[33361] = sym_variable_name;
	v->a[33362] = actions(1247);
	v->a[33363] = 2;
	v->a[33364] = anon_sym_esac;
	v->a[33365] = anon_sym_SEMI_SEMI;
	v->a[33366] = actions(1245);
	v->a[33367] = 24;
	v->a[33368] = anon_sym_for;
	v->a[33369] = anon_sym_while;
	v->a[33370] = anon_sym_until;
	v->a[33371] = anon_sym_if;
	v->a[33372] = anon_sym_case;
	v->a[33373] = anon_sym_LPAREN;
	v->a[33374] = anon_sym_LBRACE;
	v->a[33375] = anon_sym_BANG;
	v->a[33376] = anon_sym_LT;
	v->a[33377] = anon_sym_GT;
	v->a[33378] = anon_sym_GT_GT;
	v->a[33379] = anon_sym_LT_AMP;
	small_parse_table_1669(v);
}

void	small_parse_table_1669(t_small_parse_table_array *v)
{
	v->a[33380] = anon_sym_GT_AMP;
	v->a[33381] = anon_sym_GT_PIPE;
	v->a[33382] = anon_sym_LT_GT;
	v->a[33383] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33384] = anon_sym_DOLLAR;
	v->a[33385] = anon_sym_DQUOTE;
	v->a[33386] = sym_raw_string;
	v->a[33387] = sym_number;
	v->a[33388] = anon_sym_DOLLAR_LBRACE;
	v->a[33389] = anon_sym_DOLLAR_LPAREN;
	v->a[33390] = anon_sym_BQUOTE;
	v->a[33391] = sym_word;
	v->a[33392] = 3;
	v->a[33393] = actions(3);
	v->a[33394] = 1;
	v->a[33395] = sym_comment;
	v->a[33396] = actions(1011);
	v->a[33397] = 2;
	v->a[33398] = sym__concat;
	v->a[33399] = ts_builtin_sym_end;
	small_parse_table_1670(v);
}

/* EOF small_parse_table_333.c */

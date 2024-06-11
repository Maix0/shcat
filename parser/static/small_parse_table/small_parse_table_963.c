/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_963.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4815(t_small_parse_table_array *v)
{
	v->a[96300] = anon_sym_QMARK;
	v->a[96301] = anon_sym_DOLLAR;
	v->a[96302] = anon_sym_POUND;
	v->a[96303] = anon_sym_AT;
	v->a[96304] = anon_sym_0;
	v->a[96305] = anon_sym__;
	v->a[96306] = 10;
	v->a[96307] = actions(3);
	v->a[96308] = 1;
	v->a[96309] = sym_comment;
	v->a[96310] = actions(3856);
	v->a[96311] = 1;
	v->a[96312] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96313] = actions(3862);
	v->a[96314] = 1;
	v->a[96315] = sym_string_content;
	v->a[96316] = actions(3864);
	v->a[96317] = 1;
	v->a[96318] = anon_sym_DOLLAR_LBRACE;
	v->a[96319] = actions(3866);
	small_parse_table_4816(v);
}

void	small_parse_table_4816(t_small_parse_table_array *v)
{
	v->a[96320] = 1;
	v->a[96321] = anon_sym_DOLLAR_LPAREN;
	v->a[96322] = actions(3868);
	v->a[96323] = 1;
	v->a[96324] = anon_sym_BQUOTE;
	v->a[96325] = actions(4118);
	v->a[96326] = 1;
	v->a[96327] = anon_sym_DOLLAR;
	v->a[96328] = actions(4120);
	v->a[96329] = 1;
	v->a[96330] = anon_sym_DQUOTE;
	v->a[96331] = state(1987);
	v->a[96332] = 1;
	v->a[96333] = aux_sym_string_repeat1;
	v->a[96334] = state(2107);
	v->a[96335] = 4;
	v->a[96336] = sym_arithmetic_expansion;
	v->a[96337] = sym_simple_expansion;
	v->a[96338] = sym_expansion;
	v->a[96339] = sym_command_substitution;
	small_parse_table_4817(v);
}

void	small_parse_table_4817(t_small_parse_table_array *v)
{
	v->a[96340] = 4;
	v->a[96341] = actions(3);
	v->a[96342] = 1;
	v->a[96343] = sym_comment;
	v->a[96344] = actions(4100);
	v->a[96345] = 1;
	v->a[96346] = anon_sym_esac;
	v->a[96347] = actions(4102);
	v->a[96348] = 1;
	v->a[96349] = sym_extglob_pattern;
	v->a[96350] = actions(4098);
	v->a[96351] = 10;
	v->a[96352] = anon_sym_LPAREN;
	v->a[96353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96354] = anon_sym_DOLLAR;
	v->a[96355] = anon_sym_DQUOTE;
	v->a[96356] = sym_raw_string;
	v->a[96357] = sym_number;
	v->a[96358] = anon_sym_DOLLAR_LBRACE;
	v->a[96359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4818(v);
}

void	small_parse_table_4818(t_small_parse_table_array *v)
{
	v->a[96360] = anon_sym_BQUOTE;
	v->a[96361] = sym_word;
	v->a[96362] = 10;
	v->a[96363] = actions(3);
	v->a[96364] = 1;
	v->a[96365] = sym_comment;
	v->a[96366] = actions(3856);
	v->a[96367] = 1;
	v->a[96368] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96369] = actions(3862);
	v->a[96370] = 1;
	v->a[96371] = sym_string_content;
	v->a[96372] = actions(3864);
	v->a[96373] = 1;
	v->a[96374] = anon_sym_DOLLAR_LBRACE;
	v->a[96375] = actions(3866);
	v->a[96376] = 1;
	v->a[96377] = anon_sym_DOLLAR_LPAREN;
	v->a[96378] = actions(3868);
	v->a[96379] = 1;
	small_parse_table_4819(v);
}

void	small_parse_table_4819(t_small_parse_table_array *v)
{
	v->a[96380] = anon_sym_BQUOTE;
	v->a[96381] = actions(4122);
	v->a[96382] = 1;
	v->a[96383] = anon_sym_DOLLAR;
	v->a[96384] = actions(4124);
	v->a[96385] = 1;
	v->a[96386] = anon_sym_DQUOTE;
	v->a[96387] = state(2066);
	v->a[96388] = 1;
	v->a[96389] = aux_sym_string_repeat1;
	v->a[96390] = state(2107);
	v->a[96391] = 4;
	v->a[96392] = sym_arithmetic_expansion;
	v->a[96393] = sym_simple_expansion;
	v->a[96394] = sym_expansion;
	v->a[96395] = sym_command_substitution;
	v->a[96396] = 10;
	v->a[96397] = actions(3);
	v->a[96398] = 1;
	v->a[96399] = sym_comment;
	small_parse_table_4820(v);
}

/* EOF small_parse_table_963.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_973.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4865(t_small_parse_table_array *v)
{
	v->a[97300] = actions(3868);
	v->a[97301] = 1;
	v->a[97302] = anon_sym_BQUOTE;
	v->a[97303] = actions(4216);
	v->a[97304] = 1;
	v->a[97305] = anon_sym_DOLLAR;
	v->a[97306] = actions(4218);
	v->a[97307] = 1;
	v->a[97308] = anon_sym_DQUOTE;
	v->a[97309] = state(1987);
	v->a[97310] = 1;
	v->a[97311] = aux_sym_string_repeat1;
	v->a[97312] = state(2107);
	v->a[97313] = 4;
	v->a[97314] = sym_arithmetic_expansion;
	v->a[97315] = sym_simple_expansion;
	v->a[97316] = sym_expansion;
	v->a[97317] = sym_command_substitution;
	v->a[97318] = 10;
	v->a[97319] = actions(3);
	small_parse_table_4866(v);
}

void	small_parse_table_4866(t_small_parse_table_array *v)
{
	v->a[97320] = 1;
	v->a[97321] = sym_comment;
	v->a[97322] = actions(3856);
	v->a[97323] = 1;
	v->a[97324] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97325] = actions(3862);
	v->a[97326] = 1;
	v->a[97327] = sym_string_content;
	v->a[97328] = actions(3864);
	v->a[97329] = 1;
	v->a[97330] = anon_sym_DOLLAR_LBRACE;
	v->a[97331] = actions(3866);
	v->a[97332] = 1;
	v->a[97333] = anon_sym_DOLLAR_LPAREN;
	v->a[97334] = actions(3868);
	v->a[97335] = 1;
	v->a[97336] = anon_sym_BQUOTE;
	v->a[97337] = actions(4220);
	v->a[97338] = 1;
	v->a[97339] = anon_sym_DOLLAR;
	small_parse_table_4867(v);
}

void	small_parse_table_4867(t_small_parse_table_array *v)
{
	v->a[97340] = actions(4222);
	v->a[97341] = 1;
	v->a[97342] = anon_sym_DQUOTE;
	v->a[97343] = state(1987);
	v->a[97344] = 1;
	v->a[97345] = aux_sym_string_repeat1;
	v->a[97346] = state(2107);
	v->a[97347] = 4;
	v->a[97348] = sym_arithmetic_expansion;
	v->a[97349] = sym_simple_expansion;
	v->a[97350] = sym_expansion;
	v->a[97351] = sym_command_substitution;
	v->a[97352] = 6;
	v->a[97353] = actions(1094);
	v->a[97354] = 1;
	v->a[97355] = sym_comment;
	v->a[97356] = actions(3896);
	v->a[97357] = 1;
	v->a[97358] = anon_sym_LT_LT;
	v->a[97359] = actions(3898);
	small_parse_table_4868(v);
}

void	small_parse_table_4868(t_small_parse_table_array *v)
{
	v->a[97360] = 1;
	v->a[97361] = anon_sym_LT_LT_DASH;
	v->a[97362] = actions(4228);
	v->a[97363] = 2;
	v->a[97364] = anon_sym_LT_AMP_DASH;
	v->a[97365] = anon_sym_GT_AMP_DASH;
	v->a[97366] = actions(4226);
	v->a[97367] = 3;
	v->a[97368] = anon_sym_GT_GT;
	v->a[97369] = anon_sym_AMP_GT_GT;
	v->a[97370] = anon_sym_GT_PIPE;
	v->a[97371] = actions(4224);
	v->a[97372] = 5;
	v->a[97373] = anon_sym_LT;
	v->a[97374] = anon_sym_GT;
	v->a[97375] = anon_sym_AMP_GT;
	v->a[97376] = anon_sym_LT_AMP;
	v->a[97377] = anon_sym_GT_AMP;
	v->a[97378] = 10;
	v->a[97379] = actions(3);
	small_parse_table_4869(v);
}

void	small_parse_table_4869(t_small_parse_table_array *v)
{
	v->a[97380] = 1;
	v->a[97381] = sym_comment;
	v->a[97382] = actions(3856);
	v->a[97383] = 1;
	v->a[97384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97385] = actions(3862);
	v->a[97386] = 1;
	v->a[97387] = sym_string_content;
	v->a[97388] = actions(3864);
	v->a[97389] = 1;
	v->a[97390] = anon_sym_DOLLAR_LBRACE;
	v->a[97391] = actions(3866);
	v->a[97392] = 1;
	v->a[97393] = anon_sym_DOLLAR_LPAREN;
	v->a[97394] = actions(3868);
	v->a[97395] = 1;
	v->a[97396] = anon_sym_BQUOTE;
	v->a[97397] = actions(4230);
	v->a[97398] = 1;
	v->a[97399] = anon_sym_DOLLAR;
	small_parse_table_4870(v);
}

/* EOF small_parse_table_973.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_753.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3765(t_small_parse_table_array *v)
{
	v->a[75300] = sym_comment;
	v->a[75301] = actions(2685);
	v->a[75302] = 1;
	v->a[75303] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75304] = actions(2687);
	v->a[75305] = 1;
	v->a[75306] = anon_sym_DOLLAR;
	v->a[75307] = actions(2689);
	v->a[75308] = 1;
	v->a[75309] = anon_sym_DQUOTE;
	v->a[75310] = actions(2691);
	v->a[75311] = 1;
	v->a[75312] = anon_sym_DOLLAR_LBRACE;
	v->a[75313] = actions(2693);
	v->a[75314] = 1;
	v->a[75315] = anon_sym_DOLLAR_LPAREN;
	v->a[75316] = actions(2695);
	v->a[75317] = 1;
	v->a[75318] = anon_sym_BQUOTE;
	v->a[75319] = actions(2792);
	small_parse_table_3766(v);
}

void	small_parse_table_3766(t_small_parse_table_array *v)
{
	v->a[75320] = 1;
	v->a[75321] = sym__comment_word;
	v->a[75322] = actions(2794);
	v->a[75323] = 1;
	v->a[75324] = sym__empty_value;
	v->a[75325] = state(758);
	v->a[75326] = 1;
	v->a[75327] = sym_concatenation;
	v->a[75328] = actions(2790);
	v->a[75329] = 3;
	v->a[75330] = sym_raw_string;
	v->a[75331] = sym_number;
	v->a[75332] = sym_word;
	v->a[75333] = state(439);
	v->a[75334] = 5;
	v->a[75335] = sym_arithmetic_expansion;
	v->a[75336] = sym_string;
	v->a[75337] = sym_simple_expansion;
	v->a[75338] = sym_expansion;
	v->a[75339] = sym_command_substitution;
	small_parse_table_3767(v);
}

void	small_parse_table_3767(t_small_parse_table_array *v)
{
	v->a[75340] = 10;
	v->a[75341] = actions(3);
	v->a[75342] = 1;
	v->a[75343] = sym_comment;
	v->a[75344] = actions(2798);
	v->a[75345] = 1;
	v->a[75346] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75347] = actions(2800);
	v->a[75348] = 1;
	v->a[75349] = anon_sym_DOLLAR;
	v->a[75350] = actions(2802);
	v->a[75351] = 1;
	v->a[75352] = anon_sym_DQUOTE;
	v->a[75353] = actions(2804);
	v->a[75354] = 1;
	v->a[75355] = anon_sym_DOLLAR_LBRACE;
	v->a[75356] = actions(2806);
	v->a[75357] = 1;
	v->a[75358] = anon_sym_DOLLAR_LPAREN;
	v->a[75359] = actions(2808);
	small_parse_table_3768(v);
}

void	small_parse_table_3768(t_small_parse_table_array *v)
{
	v->a[75360] = 1;
	v->a[75361] = anon_sym_BQUOTE;
	v->a[75362] = actions(2810);
	v->a[75363] = 1;
	v->a[75364] = sym__bare_dollar;
	v->a[75365] = actions(2796);
	v->a[75366] = 5;
	v->a[75367] = aux_sym_concatenation_token1;
	v->a[75368] = sym_raw_string;
	v->a[75369] = sym_number;
	v->a[75370] = sym__comment_word;
	v->a[75371] = sym_word;
	v->a[75372] = state(1479);
	v->a[75373] = 5;
	v->a[75374] = sym_arithmetic_expansion;
	v->a[75375] = sym_string;
	v->a[75376] = sym_simple_expansion;
	v->a[75377] = sym_expansion;
	v->a[75378] = sym_command_substitution;
	v->a[75379] = 10;
	small_parse_table_3769(v);
}

void	small_parse_table_3769(t_small_parse_table_array *v)
{
	v->a[75380] = actions(3);
	v->a[75381] = 1;
	v->a[75382] = sym_comment;
	v->a[75383] = actions(767);
	v->a[75384] = 1;
	v->a[75385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75386] = actions(771);
	v->a[75387] = 1;
	v->a[75388] = anon_sym_DQUOTE;
	v->a[75389] = actions(773);
	v->a[75390] = 1;
	v->a[75391] = anon_sym_DOLLAR_LBRACE;
	v->a[75392] = actions(775);
	v->a[75393] = 1;
	v->a[75394] = anon_sym_DOLLAR_LPAREN;
	v->a[75395] = actions(777);
	v->a[75396] = 1;
	v->a[75397] = anon_sym_BQUOTE;
	v->a[75398] = actions(2814);
	v->a[75399] = 1;
	small_parse_table_3770(v);
}

/* EOF small_parse_table_753.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_743.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3715(t_small_parse_table_array *v)
{
	v->a[74300] = 1;
	v->a[74301] = sym_comment;
	v->a[74302] = actions(894);
	v->a[74303] = 1;
	v->a[74304] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74305] = actions(896);
	v->a[74306] = 1;
	v->a[74307] = anon_sym_DOLLAR;
	v->a[74308] = actions(898);
	v->a[74309] = 1;
	v->a[74310] = anon_sym_DQUOTE;
	v->a[74311] = actions(900);
	v->a[74312] = 1;
	v->a[74313] = anon_sym_DOLLAR_LBRACE;
	v->a[74314] = actions(902);
	v->a[74315] = 1;
	v->a[74316] = anon_sym_DOLLAR_LPAREN;
	v->a[74317] = actions(904);
	v->a[74318] = 1;
	v->a[74319] = anon_sym_BQUOTE;
	small_parse_table_3716(v);
}

void	small_parse_table_3716(t_small_parse_table_array *v)
{
	v->a[74320] = actions(2659);
	v->a[74321] = 1;
	v->a[74322] = aux_sym_heredoc_redirect_token1;
	v->a[74323] = state(1480);
	v->a[74324] = 1;
	v->a[74325] = aux_sym__heredoc_command;
	v->a[74326] = state(1937);
	v->a[74327] = 1;
	v->a[74328] = sym_concatenation;
	v->a[74329] = actions(882);
	v->a[74330] = 3;
	v->a[74331] = sym_raw_string;
	v->a[74332] = sym_number;
	v->a[74333] = sym_word;
	v->a[74334] = state(1774);
	v->a[74335] = 5;
	v->a[74336] = sym_arithmetic_expansion;
	v->a[74337] = sym_string;
	v->a[74338] = sym_simple_expansion;
	v->a[74339] = sym_expansion;
	small_parse_table_3717(v);
}

void	small_parse_table_3717(t_small_parse_table_array *v)
{
	v->a[74340] = sym_command_substitution;
	v->a[74341] = 10;
	v->a[74342] = actions(3);
	v->a[74343] = 1;
	v->a[74344] = sym_comment;
	v->a[74345] = actions(2663);
	v->a[74346] = 1;
	v->a[74347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74348] = actions(2665);
	v->a[74349] = 1;
	v->a[74350] = anon_sym_DOLLAR;
	v->a[74351] = actions(2667);
	v->a[74352] = 1;
	v->a[74353] = anon_sym_DQUOTE;
	v->a[74354] = actions(2669);
	v->a[74355] = 1;
	v->a[74356] = anon_sym_DOLLAR_LBRACE;
	v->a[74357] = actions(2671);
	v->a[74358] = 1;
	v->a[74359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3718(v);
}

void	small_parse_table_3718(t_small_parse_table_array *v)
{
	v->a[74360] = actions(2673);
	v->a[74361] = 1;
	v->a[74362] = anon_sym_BQUOTE;
	v->a[74363] = actions(2675);
	v->a[74364] = 1;
	v->a[74365] = sym__bare_dollar;
	v->a[74366] = actions(2661);
	v->a[74367] = 5;
	v->a[74368] = aux_sym_concatenation_token1;
	v->a[74369] = sym_raw_string;
	v->a[74370] = sym_number;
	v->a[74371] = sym__comment_word;
	v->a[74372] = sym_word;
	v->a[74373] = state(990);
	v->a[74374] = 5;
	v->a[74375] = sym_arithmetic_expansion;
	v->a[74376] = sym_string;
	v->a[74377] = sym_simple_expansion;
	v->a[74378] = sym_expansion;
	v->a[74379] = sym_command_substitution;
	small_parse_table_3719(v);
}

void	small_parse_table_3719(t_small_parse_table_array *v)
{
	v->a[74380] = 10;
	v->a[74381] = actions(3);
	v->a[74382] = 1;
	v->a[74383] = sym_comment;
	v->a[74384] = actions(2587);
	v->a[74385] = 1;
	v->a[74386] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74387] = actions(2591);
	v->a[74388] = 1;
	v->a[74389] = anon_sym_DQUOTE;
	v->a[74390] = actions(2593);
	v->a[74391] = 1;
	v->a[74392] = anon_sym_DOLLAR_LBRACE;
	v->a[74393] = actions(2595);
	v->a[74394] = 1;
	v->a[74395] = anon_sym_DOLLAR_LPAREN;
	v->a[74396] = actions(2597);
	v->a[74397] = 1;
	v->a[74398] = anon_sym_BQUOTE;
	v->a[74399] = actions(2599);
	small_parse_table_3720(v);
}

/* EOF small_parse_table_743.c */

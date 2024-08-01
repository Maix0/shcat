/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_417.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2085(t_small_parse_table_array *v)
{
	v->a[41700] = aux_sym_redirected_statement_repeat1;
	v->a[41701] = 10;
	v->a[41702] = actions(3);
	v->a[41703] = 1;
	v->a[41704] = sym_comment;
	v->a[41705] = actions(1569);
	v->a[41706] = 1;
	v->a[41707] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41708] = actions(1573);
	v->a[41709] = 1;
	v->a[41710] = anon_sym_DQUOTE;
	v->a[41711] = actions(1575);
	v->a[41712] = 1;
	v->a[41713] = anon_sym_DOLLAR_LBRACE;
	v->a[41714] = actions(1577);
	v->a[41715] = 1;
	v->a[41716] = anon_sym_DOLLAR_LPAREN;
	v->a[41717] = actions(1579);
	v->a[41718] = 1;
	v->a[41719] = anon_sym_BQUOTE;
	small_parse_table_2086(v);
}

void	small_parse_table_2086(t_small_parse_table_array *v)
{
	v->a[41720] = actions(1756);
	v->a[41721] = 1;
	v->a[41722] = anon_sym_DOLLAR;
	v->a[41723] = state(1494);
	v->a[41724] = 1;
	v->a[41725] = sym_concatenation;
	v->a[41726] = actions(1888);
	v->a[41727] = 3;
	v->a[41728] = sym_raw_string;
	v->a[41729] = sym_number;
	v->a[41730] = sym_word;
	v->a[41731] = state(1384);
	v->a[41732] = 5;
	v->a[41733] = sym_arithmetic_expansion;
	v->a[41734] = sym_string;
	v->a[41735] = sym_simple_expansion;
	v->a[41736] = sym_expansion;
	v->a[41737] = sym_command_substitution;
	v->a[41738] = 6;
	v->a[41739] = actions(3);
	small_parse_table_2087(v);
}

void	small_parse_table_2087(t_small_parse_table_array *v)
{
	v->a[41740] = 1;
	v->a[41741] = sym_comment;
	v->a[41742] = actions(1890);
	v->a[41743] = 1;
	v->a[41744] = aux_sym_concatenation_token1;
	v->a[41745] = actions(1892);
	v->a[41746] = 1;
	v->a[41747] = sym__concat;
	v->a[41748] = state(870);
	v->a[41749] = 1;
	v->a[41750] = aux_sym_concatenation_repeat1;
	v->a[41751] = actions(917);
	v->a[41752] = 2;
	v->a[41753] = sym_variable_name;
	v->a[41754] = aux_sym_heredoc_redirect_token1;
	v->a[41755] = actions(919);
	v->a[41756] = 10;
	v->a[41757] = anon_sym_PIPE;
	v->a[41758] = anon_sym_SEMI_SEMI;
	v->a[41759] = anon_sym_AMP_AMP;
	small_parse_table_2088(v);
}

void	small_parse_table_2088(t_small_parse_table_array *v)
{
	v->a[41760] = anon_sym_PIPE_PIPE;
	v->a[41761] = anon_sym_LT;
	v->a[41762] = anon_sym_GT;
	v->a[41763] = anon_sym_GT_GT;
	v->a[41764] = anon_sym_LT_LT;
	v->a[41765] = anon_sym_BQUOTE;
	v->a[41766] = anon_sym_SEMI;
	v->a[41767] = 10;
	v->a[41768] = actions(3);
	v->a[41769] = 1;
	v->a[41770] = sym_comment;
	v->a[41771] = actions(580);
	v->a[41772] = 1;
	v->a[41773] = anon_sym_PIPE;
	v->a[41774] = actions(591);
	v->a[41775] = 1;
	v->a[41776] = anon_sym_BQUOTE;
	v->a[41777] = actions(597);
	v->a[41778] = 1;
	v->a[41779] = anon_sym_LT_LT;
	small_parse_table_2089(v);
}

void	small_parse_table_2089(t_small_parse_table_array *v)
{
	v->a[41780] = actions(1870);
	v->a[41781] = 1;
	v->a[41782] = aux_sym_heredoc_redirect_token1;
	v->a[41783] = state(554);
	v->a[41784] = 1;
	v->a[41785] = sym_terminator;
	v->a[41786] = actions(593);
	v->a[41787] = 2;
	v->a[41788] = anon_sym_SEMI_SEMI;
	v->a[41789] = anon_sym_SEMI;
	v->a[41790] = actions(762);
	v->a[41791] = 2;
	v->a[41792] = anon_sym_AMP_AMP;
	v->a[41793] = anon_sym_PIPE_PIPE;
	v->a[41794] = actions(1880);
	v->a[41795] = 3;
	v->a[41796] = anon_sym_LT;
	v->a[41797] = anon_sym_GT;
	v->a[41798] = anon_sym_GT_GT;
	v->a[41799] = state(925);
	small_parse_table_2090(v);
}

/* EOF small_parse_table_417.c */

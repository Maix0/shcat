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
	v->a[41700] = 2;
	v->a[41701] = sym_variable_assignment;
	v->a[41702] = aux_sym_command_repeat1;
	v->a[41703] = actions(61);
	v->a[41704] = 3;
	v->a[41705] = sym_raw_string;
	v->a[41706] = sym_number;
	v->a[41707] = sym_word;
	v->a[41708] = state(455);
	v->a[41709] = 5;
	v->a[41710] = sym_arithmetic_expansion;
	v->a[41711] = sym_string;
	v->a[41712] = sym_simple_expansion;
	v->a[41713] = sym_expansion;
	v->a[41714] = sym_command_substitution;
	v->a[41715] = actions(1093);
	v->a[41716] = 7;
	v->a[41717] = anon_sym_LT;
	v->a[41718] = anon_sym_GT;
	v->a[41719] = anon_sym_GT_GT;
	small_parse_table_2086(v);
}

void	small_parse_table_2086(t_small_parse_table_array *v)
{
	v->a[41720] = anon_sym_LT_AMP;
	v->a[41721] = anon_sym_GT_AMP;
	v->a[41722] = anon_sym_GT_PIPE;
	v->a[41723] = anon_sym_LT_GT;
	v->a[41724] = 3;
	v->a[41725] = actions(3);
	v->a[41726] = 1;
	v->a[41727] = sym_comment;
	v->a[41728] = actions(571);
	v->a[41729] = 3;
	v->a[41730] = sym_file_descriptor;
	v->a[41731] = sym__concat;
	v->a[41732] = ts_builtin_sym_end;
	v->a[41733] = actions(569);
	v->a[41734] = 25;
	v->a[41735] = anon_sym_PIPE;
	v->a[41736] = anon_sym_SEMI_SEMI;
	v->a[41737] = anon_sym_AMP_AMP;
	v->a[41738] = anon_sym_PIPE_PIPE;
	v->a[41739] = anon_sym_LT;
	small_parse_table_2087(v);
}

void	small_parse_table_2087(t_small_parse_table_array *v)
{
	v->a[41740] = anon_sym_GT;
	v->a[41741] = anon_sym_GT_GT;
	v->a[41742] = anon_sym_LT_AMP;
	v->a[41743] = anon_sym_GT_AMP;
	v->a[41744] = anon_sym_GT_PIPE;
	v->a[41745] = anon_sym_LT_GT;
	v->a[41746] = anon_sym_LT_LT;
	v->a[41747] = anon_sym_LT_LT_DASH;
	v->a[41748] = aux_sym_heredoc_redirect_token1;
	v->a[41749] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41750] = aux_sym_concatenation_token1;
	v->a[41751] = anon_sym_DOLLAR;
	v->a[41752] = anon_sym_DQUOTE;
	v->a[41753] = sym_raw_string;
	v->a[41754] = sym_number;
	v->a[41755] = anon_sym_DOLLAR_LBRACE;
	v->a[41756] = anon_sym_DOLLAR_LPAREN;
	v->a[41757] = anon_sym_BQUOTE;
	v->a[41758] = sym_word;
	v->a[41759] = anon_sym_SEMI;
	small_parse_table_2088(v);
}

void	small_parse_table_2088(t_small_parse_table_array *v)
{
	v->a[41760] = 3;
	v->a[41761] = actions(3);
	v->a[41762] = 1;
	v->a[41763] = sym_comment;
	v->a[41764] = actions(515);
	v->a[41765] = 3;
	v->a[41766] = sym_file_descriptor;
	v->a[41767] = sym__concat;
	v->a[41768] = ts_builtin_sym_end;
	v->a[41769] = actions(513);
	v->a[41770] = 25;
	v->a[41771] = anon_sym_PIPE;
	v->a[41772] = anon_sym_SEMI_SEMI;
	v->a[41773] = anon_sym_AMP_AMP;
	v->a[41774] = anon_sym_PIPE_PIPE;
	v->a[41775] = anon_sym_LT;
	v->a[41776] = anon_sym_GT;
	v->a[41777] = anon_sym_GT_GT;
	v->a[41778] = anon_sym_LT_AMP;
	v->a[41779] = anon_sym_GT_AMP;
	small_parse_table_2089(v);
}

void	small_parse_table_2089(t_small_parse_table_array *v)
{
	v->a[41780] = anon_sym_GT_PIPE;
	v->a[41781] = anon_sym_LT_GT;
	v->a[41782] = anon_sym_LT_LT;
	v->a[41783] = anon_sym_LT_LT_DASH;
	v->a[41784] = aux_sym_heredoc_redirect_token1;
	v->a[41785] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41786] = aux_sym_concatenation_token1;
	v->a[41787] = anon_sym_DOLLAR;
	v->a[41788] = anon_sym_DQUOTE;
	v->a[41789] = sym_raw_string;
	v->a[41790] = sym_number;
	v->a[41791] = anon_sym_DOLLAR_LBRACE;
	v->a[41792] = anon_sym_DOLLAR_LPAREN;
	v->a[41793] = anon_sym_BQUOTE;
	v->a[41794] = sym_word;
	v->a[41795] = anon_sym_SEMI;
	v->a[41796] = 3;
	v->a[41797] = actions(3);
	v->a[41798] = 1;
	v->a[41799] = sym_comment;
	small_parse_table_2090(v);
}

/* EOF small_parse_table_417.c */

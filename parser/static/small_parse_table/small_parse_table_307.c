/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_307.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1535(t_small_parse_table_array *v)
{
	v->a[30700] = anon_sym_AMP_AMP;
	v->a[30701] = anon_sym_PIPE_PIPE;
	v->a[30702] = anon_sym_LT;
	v->a[30703] = anon_sym_GT;
	v->a[30704] = anon_sym_GT_GT;
	v->a[30705] = anon_sym_AMP_GT;
	v->a[30706] = anon_sym_AMP_GT_GT;
	v->a[30707] = anon_sym_LT_AMP;
	v->a[30708] = anon_sym_GT_AMP;
	v->a[30709] = anon_sym_GT_PIPE;
	v->a[30710] = anon_sym_LT_AMP_DASH;
	v->a[30711] = anon_sym_GT_AMP_DASH;
	v->a[30712] = anon_sym_LT_LT;
	v->a[30713] = anon_sym_LT_LT_DASH;
	v->a[30714] = aux_sym_heredoc_redirect_token1;
	v->a[30715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30716] = anon_sym_AMP;
	v->a[30717] = anon_sym_DOLLAR;
	v->a[30718] = anon_sym_DQUOTE;
	v->a[30719] = sym_raw_string;
	small_parse_table_1536(v);
}

void	small_parse_table_1536(t_small_parse_table_array *v)
{
	v->a[30720] = aux_sym_number_token1;
	v->a[30721] = aux_sym_number_token2;
	v->a[30722] = anon_sym_DOLLAR_LBRACE;
	v->a[30723] = anon_sym_DOLLAR_LPAREN;
	v->a[30724] = anon_sym_BQUOTE;
	v->a[30725] = sym_word;
	v->a[30726] = anon_sym_SEMI;
	v->a[30727] = 5;
	v->a[30728] = actions(3);
	v->a[30729] = 1;
	v->a[30730] = sym_comment;
	v->a[30731] = state(726);
	v->a[30732] = 1;
	v->a[30733] = sym_concatenation;
	v->a[30734] = actions(755);
	v->a[30735] = 2;
	v->a[30736] = sym_file_descriptor;
	v->a[30737] = sym_variable_name;
	v->a[30738] = state(760);
	v->a[30739] = 6;
	small_parse_table_1537(v);
}

void	small_parse_table_1537(t_small_parse_table_array *v)
{
	v->a[30740] = sym_arithmetic_expansion;
	v->a[30741] = sym_string;
	v->a[30742] = sym_number;
	v->a[30743] = sym_simple_expansion;
	v->a[30744] = sym_expansion;
	v->a[30745] = sym_command_substitution;
	v->a[30746] = actions(757);
	v->a[30747] = 26;
	v->a[30748] = anon_sym_PIPE;
	v->a[30749] = anon_sym_AMP_AMP;
	v->a[30750] = anon_sym_PIPE_PIPE;
	v->a[30751] = anon_sym_LT;
	v->a[30752] = anon_sym_GT;
	v->a[30753] = anon_sym_GT_GT;
	v->a[30754] = anon_sym_AMP_GT;
	v->a[30755] = anon_sym_AMP_GT_GT;
	v->a[30756] = anon_sym_LT_AMP;
	v->a[30757] = anon_sym_GT_AMP;
	v->a[30758] = anon_sym_GT_PIPE;
	v->a[30759] = anon_sym_LT_AMP_DASH;
	small_parse_table_1538(v);
}

void	small_parse_table_1538(t_small_parse_table_array *v)
{
	v->a[30760] = anon_sym_GT_AMP_DASH;
	v->a[30761] = anon_sym_LT_LT;
	v->a[30762] = anon_sym_LT_LT_DASH;
	v->a[30763] = aux_sym_heredoc_redirect_token1;
	v->a[30764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30765] = anon_sym_DOLLAR;
	v->a[30766] = anon_sym_DQUOTE;
	v->a[30767] = sym_raw_string;
	v->a[30768] = aux_sym_number_token1;
	v->a[30769] = aux_sym_number_token2;
	v->a[30770] = anon_sym_DOLLAR_LBRACE;
	v->a[30771] = anon_sym_DOLLAR_LPAREN;
	v->a[30772] = anon_sym_BQUOTE;
	v->a[30773] = sym_word;
	v->a[30774] = 6;
	v->a[30775] = actions(3);
	v->a[30776] = 1;
	v->a[30777] = sym_comment;
	v->a[30778] = actions(1208);
	v->a[30779] = 1;
	small_parse_table_1539(v);
}

void	small_parse_table_1539(t_small_parse_table_array *v)
{
	v->a[30780] = aux_sym_concatenation_token1;
	v->a[30781] = actions(1212);
	v->a[30782] = 1;
	v->a[30783] = sym__concat;
	v->a[30784] = state(327);
	v->a[30785] = 1;
	v->a[30786] = aux_sym_concatenation_repeat1;
	v->a[30787] = actions(1210);
	v->a[30788] = 2;
	v->a[30789] = sym_file_descriptor;
	v->a[30790] = sym_variable_name;
	v->a[30791] = actions(1206);
	v->a[30792] = 30;
	v->a[30793] = anon_sym_PIPE;
	v->a[30794] = anon_sym_RPAREN;
	v->a[30795] = anon_sym_SEMI_SEMI;
	v->a[30796] = anon_sym_AMP_AMP;
	v->a[30797] = anon_sym_PIPE_PIPE;
	v->a[30798] = anon_sym_LT;
	v->a[30799] = anon_sym_GT;
	small_parse_table_1540(v);
}

/* EOF small_parse_table_307.c */

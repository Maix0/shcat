/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1817.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9085(t_small_parse_table_array *v)
{
	v->a[181700] = anon_sym_PIPE_EQ;
	v->a[181701] = 3;
	v->a[181702] = actions(71);
	v->a[181703] = 1;
	v->a[181704] = sym_comment;
	v->a[181705] = actions(7035);
	v->a[181706] = 14;
	v->a[181707] = anon_sym_EQ;
	v->a[181708] = anon_sym_PIPE;
	v->a[181709] = anon_sym_CARET;
	v->a[181710] = anon_sym_AMP;
	v->a[181711] = anon_sym_LT;
	v->a[181712] = anon_sym_GT;
	v->a[181713] = anon_sym_LT_LT;
	v->a[181714] = anon_sym_GT_GT;
	v->a[181715] = anon_sym_PLUS;
	v->a[181716] = anon_sym_DASH;
	v->a[181717] = anon_sym_STAR;
	v->a[181718] = anon_sym_SLASH;
	v->a[181719] = anon_sym_PERCENT;
	small_parse_table_9086(v);
}

void	small_parse_table_9086(t_small_parse_table_array *v)
{
	v->a[181720] = anon_sym_STAR_STAR;
	v->a[181721] = actions(7033);
	v->a[181722] = 22;
	v->a[181723] = anon_sym_PLUS_PLUS;
	v->a[181724] = anon_sym_DASH_DASH;
	v->a[181725] = anon_sym_PLUS_EQ;
	v->a[181726] = anon_sym_DASH_EQ;
	v->a[181727] = anon_sym_STAR_EQ;
	v->a[181728] = anon_sym_SLASH_EQ;
	v->a[181729] = anon_sym_PERCENT_EQ;
	v->a[181730] = anon_sym_STAR_STAR_EQ;
	v->a[181731] = anon_sym_LT_LT_EQ;
	v->a[181732] = anon_sym_GT_GT_EQ;
	v->a[181733] = anon_sym_AMP_EQ;
	v->a[181734] = anon_sym_CARET_EQ;
	v->a[181735] = anon_sym_PIPE_EQ;
	v->a[181736] = anon_sym_PIPE_PIPE;
	v->a[181737] = anon_sym_AMP_AMP;
	v->a[181738] = anon_sym_EQ_EQ;
	v->a[181739] = anon_sym_BANG_EQ;
	small_parse_table_9087(v);
}

void	small_parse_table_9087(t_small_parse_table_array *v)
{
	v->a[181740] = anon_sym_LT_EQ;
	v->a[181741] = anon_sym_GT_EQ;
	v->a[181742] = anon_sym_RPAREN;
	v->a[181743] = anon_sym_EQ_TILDE;
	v->a[181744] = anon_sym_QMARK;
	v->a[181745] = 3;
	v->a[181746] = actions(3);
	v->a[181747] = 1;
	v->a[181748] = sym_comment;
	v->a[181749] = actions(1298);
	v->a[181750] = 5;
	v->a[181751] = sym_file_descriptor;
	v->a[181752] = sym__concat;
	v->a[181753] = sym_test_operator;
	v->a[181754] = sym__brace_start;
	v->a[181755] = aux_sym_heredoc_redirect_token1;
	v->a[181756] = actions(1296);
	v->a[181757] = 31;
	v->a[181758] = anon_sym_LPAREN_LPAREN;
	v->a[181759] = anon_sym_PIPE_PIPE;
	small_parse_table_9088(v);
}

void	small_parse_table_9088(t_small_parse_table_array *v)
{
	v->a[181760] = anon_sym_AMP_AMP;
	v->a[181761] = anon_sym_LT;
	v->a[181762] = anon_sym_GT;
	v->a[181763] = anon_sym_GT_GT;
	v->a[181764] = anon_sym_AMP_GT;
	v->a[181765] = anon_sym_AMP_GT_GT;
	v->a[181766] = anon_sym_LT_AMP;
	v->a[181767] = anon_sym_GT_AMP;
	v->a[181768] = anon_sym_GT_PIPE;
	v->a[181769] = anon_sym_LT_AMP_DASH;
	v->a[181770] = anon_sym_GT_AMP_DASH;
	v->a[181771] = anon_sym_LT_LT_LT;
	v->a[181772] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[181773] = anon_sym_DOLLAR_LBRACK;
	v->a[181774] = aux_sym_concatenation_token1;
	v->a[181775] = anon_sym_DOLLAR;
	v->a[181776] = sym__special_character;
	v->a[181777] = anon_sym_DQUOTE;
	v->a[181778] = sym_raw_string;
	v->a[181779] = sym_ansi_c_string;
	small_parse_table_9089(v);
}

void	small_parse_table_9089(t_small_parse_table_array *v)
{
	v->a[181780] = aux_sym_number_token1;
	v->a[181781] = aux_sym_number_token2;
	v->a[181782] = anon_sym_DOLLAR_LBRACE;
	v->a[181783] = anon_sym_DOLLAR_LPAREN;
	v->a[181784] = anon_sym_BQUOTE;
	v->a[181785] = anon_sym_DOLLAR_BQUOTE;
	v->a[181786] = anon_sym_LT_LPAREN;
	v->a[181787] = anon_sym_GT_LPAREN;
	v->a[181788] = sym_word;
	v->a[181789] = 24;
	v->a[181790] = actions(71);
	v->a[181791] = 1;
	v->a[181792] = sym_comment;
	v->a[181793] = actions(6474);
	v->a[181794] = 1;
	v->a[181795] = sym_word;
	v->a[181796] = actions(6480);
	v->a[181797] = 1;
	v->a[181798] = anon_sym_LPAREN;
	v->a[181799] = actions(6488);
	small_parse_table_9090(v);
}

/* EOF small_parse_table_1817.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2757.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13785(t_small_parse_table_array *v)
{
	v->a[275700] = 1;
	v->a[275701] = sym__concat;
	v->a[275702] = state(5210);
	v->a[275703] = 1;
	v->a[275704] = aux_sym_concatenation_repeat1;
	v->a[275705] = actions(5375);
	v->a[275706] = 3;
	v->a[275707] = sym_file_descriptor;
	v->a[275708] = sym_variable_name;
	v->a[275709] = aux_sym_heredoc_redirect_token1;
	v->a[275710] = actions(5373);
	v->a[275711] = 16;
	v->a[275712] = anon_sym_PIPE_PIPE;
	v->a[275713] = anon_sym_AMP_AMP;
	v->a[275714] = anon_sym_PIPE;
	v->a[275715] = anon_sym_LT;
	v->a[275716] = anon_sym_GT;
	v->a[275717] = anon_sym_LT_LT;
	v->a[275718] = anon_sym_GT_GT;
	v->a[275719] = anon_sym_PIPE_AMP;
	small_parse_table_13786(v);
}

void	small_parse_table_13786(t_small_parse_table_array *v)
{
	v->a[275720] = anon_sym_AMP_GT;
	v->a[275721] = anon_sym_AMP_GT_GT;
	v->a[275722] = anon_sym_LT_AMP;
	v->a[275723] = anon_sym_GT_AMP;
	v->a[275724] = anon_sym_GT_PIPE;
	v->a[275725] = anon_sym_LT_AMP_DASH;
	v->a[275726] = anon_sym_GT_AMP_DASH;
	v->a[275727] = anon_sym_LT_LT_DASH;
	v->a[275728] = 6;
	v->a[275729] = actions(3);
	v->a[275730] = 1;
	v->a[275731] = sym_comment;
	v->a[275732] = actions(11500);
	v->a[275733] = 1;
	v->a[275734] = aux_sym_concatenation_token1;
	v->a[275735] = actions(11502);
	v->a[275736] = 1;
	v->a[275737] = sym__concat;
	v->a[275738] = state(5209);
	v->a[275739] = 1;
	small_parse_table_13787(v);
}

void	small_parse_table_13787(t_small_parse_table_array *v)
{
	v->a[275740] = aux_sym_concatenation_repeat1;
	v->a[275741] = actions(5069);
	v->a[275742] = 3;
	v->a[275743] = sym_file_descriptor;
	v->a[275744] = sym_variable_name;
	v->a[275745] = aux_sym_heredoc_redirect_token1;
	v->a[275746] = actions(5067);
	v->a[275747] = 16;
	v->a[275748] = anon_sym_PIPE_PIPE;
	v->a[275749] = anon_sym_AMP_AMP;
	v->a[275750] = anon_sym_PIPE;
	v->a[275751] = anon_sym_LT;
	v->a[275752] = anon_sym_GT;
	v->a[275753] = anon_sym_LT_LT;
	v->a[275754] = anon_sym_GT_GT;
	v->a[275755] = anon_sym_PIPE_AMP;
	v->a[275756] = anon_sym_AMP_GT;
	v->a[275757] = anon_sym_AMP_GT_GT;
	v->a[275758] = anon_sym_LT_AMP;
	v->a[275759] = anon_sym_GT_AMP;
	small_parse_table_13788(v);
}

void	small_parse_table_13788(t_small_parse_table_array *v)
{
	v->a[275760] = anon_sym_GT_PIPE;
	v->a[275761] = anon_sym_LT_AMP_DASH;
	v->a[275762] = anon_sym_GT_AMP_DASH;
	v->a[275763] = anon_sym_LT_LT_DASH;
	v->a[275764] = 4;
	v->a[275765] = actions(71);
	v->a[275766] = 1;
	v->a[275767] = sym_comment;
	v->a[275768] = actions(12366);
	v->a[275769] = 1;
	v->a[275770] = anon_sym_esac;
	v->a[275771] = actions(12362);
	v->a[275772] = 6;
	v->a[275773] = anon_sym_LPAREN;
	v->a[275774] = anon_sym_DOLLAR;
	v->a[275775] = aux_sym_number_token1;
	v->a[275776] = aux_sym_number_token2;
	v->a[275777] = anon_sym_DOLLAR_LPAREN;
	v->a[275778] = sym_word;
	v->a[275779] = actions(12364);
	small_parse_table_13789(v);
}

void	small_parse_table_13789(t_small_parse_table_array *v)
{
	v->a[275780] = 15;
	v->a[275781] = sym_test_operator;
	v->a[275782] = sym_extglob_pattern;
	v->a[275783] = sym__brace_start;
	v->a[275784] = anon_sym_LPAREN_LPAREN;
	v->a[275785] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[275786] = anon_sym_DOLLAR_LBRACK;
	v->a[275787] = sym__special_character;
	v->a[275788] = anon_sym_DQUOTE;
	v->a[275789] = sym_raw_string;
	v->a[275790] = sym_ansi_c_string;
	v->a[275791] = anon_sym_DOLLAR_LBRACE;
	v->a[275792] = anon_sym_BQUOTE;
	v->a[275793] = anon_sym_DOLLAR_BQUOTE;
	v->a[275794] = anon_sym_LT_LPAREN;
	v->a[275795] = anon_sym_GT_LPAREN;
	v->a[275796] = 5;
	v->a[275797] = actions(71);
	v->a[275798] = 1;
	v->a[275799] = sym_comment;
	small_parse_table_13790(v);
}

/* EOF small_parse_table_2757.c */

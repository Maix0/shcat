/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_487.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2435(t_small_parse_table_array *v)
{
	v->a[48700] = anon_sym_DQUOTE;
	v->a[48701] = sym_raw_string;
	v->a[48702] = aux_sym_number_token1;
	v->a[48703] = aux_sym_number_token2;
	v->a[48704] = anon_sym_DOLLAR_LBRACE;
	v->a[48705] = anon_sym_DOLLAR_LPAREN;
	v->a[48706] = anon_sym_BQUOTE;
	v->a[48707] = anon_sym_DOLLAR_BQUOTE;
	v->a[48708] = sym_word;
	v->a[48709] = anon_sym_SEMI;
	v->a[48710] = 5;
	v->a[48711] = actions(3);
	v->a[48712] = 1;
	v->a[48713] = sym_comment;
	v->a[48714] = actions(3676);
	v->a[48715] = 1;
	v->a[48716] = sym__special_character;
	v->a[48717] = state(1072);
	v->a[48718] = 1;
	v->a[48719] = aux_sym__literal_repeat1;
	small_parse_table_2436(v);
}

void	small_parse_table_2436(t_small_parse_table_array *v)
{
	v->a[48720] = actions(3197);
	v->a[48721] = 6;
	v->a[48722] = sym_file_descriptor;
	v->a[48723] = sym_variable_name;
	v->a[48724] = sym_test_operator;
	v->a[48725] = sym__brace_start;
	v->a[48726] = ts_builtin_sym_end;
	v->a[48727] = aux_sym_heredoc_redirect_token1;
	v->a[48728] = actions(3195);
	v->a[48729] = 31;
	v->a[48730] = anon_sym_PIPE;
	v->a[48731] = anon_sym_SEMI_SEMI;
	v->a[48732] = anon_sym_PIPE_AMP;
	v->a[48733] = anon_sym_AMP_AMP;
	v->a[48734] = anon_sym_PIPE_PIPE;
	v->a[48735] = anon_sym_LT;
	v->a[48736] = anon_sym_GT;
	v->a[48737] = anon_sym_GT_GT;
	v->a[48738] = anon_sym_AMP_GT;
	v->a[48739] = anon_sym_AMP_GT_GT;
	small_parse_table_2437(v);
}

void	small_parse_table_2437(t_small_parse_table_array *v)
{
	v->a[48740] = anon_sym_LT_AMP;
	v->a[48741] = anon_sym_GT_AMP;
	v->a[48742] = anon_sym_GT_PIPE;
	v->a[48743] = anon_sym_LT_AMP_DASH;
	v->a[48744] = anon_sym_GT_AMP_DASH;
	v->a[48745] = anon_sym_LT_LT;
	v->a[48746] = anon_sym_LT_LT_DASH;
	v->a[48747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48748] = anon_sym_AMP;
	v->a[48749] = anon_sym_DOLLAR;
	v->a[48750] = anon_sym_DQUOTE;
	v->a[48751] = sym_raw_string;
	v->a[48752] = aux_sym_number_token1;
	v->a[48753] = aux_sym_number_token2;
	v->a[48754] = anon_sym_DOLLAR_LBRACE;
	v->a[48755] = anon_sym_DOLLAR_LPAREN;
	v->a[48756] = anon_sym_BQUOTE;
	v->a[48757] = anon_sym_DOLLAR_BQUOTE;
	v->a[48758] = aux_sym__simple_variable_name_token1;
	v->a[48759] = sym_word;
	small_parse_table_2438(v);
}

void	small_parse_table_2438(t_small_parse_table_array *v)
{
	v->a[48760] = anon_sym_SEMI;
	v->a[48761] = 3;
	v->a[48762] = actions(3);
	v->a[48763] = 1;
	v->a[48764] = sym_comment;
	v->a[48765] = actions(3066);
	v->a[48766] = 5;
	v->a[48767] = sym_file_descriptor;
	v->a[48768] = sym__concat;
	v->a[48769] = sym_test_operator;
	v->a[48770] = sym__brace_start;
	v->a[48771] = aux_sym_heredoc_redirect_token1;
	v->a[48772] = actions(3064);
	v->a[48773] = 34;
	v->a[48774] = anon_sym_PIPE;
	v->a[48775] = anon_sym_SEMI_SEMI;
	v->a[48776] = anon_sym_SEMI_AMP;
	v->a[48777] = anon_sym_SEMI_SEMI_AMP;
	v->a[48778] = anon_sym_PIPE_AMP;
	v->a[48779] = anon_sym_AMP_AMP;
	small_parse_table_2439(v);
}

void	small_parse_table_2439(t_small_parse_table_array *v)
{
	v->a[48780] = anon_sym_PIPE_PIPE;
	v->a[48781] = anon_sym_LT;
	v->a[48782] = anon_sym_GT;
	v->a[48783] = anon_sym_GT_GT;
	v->a[48784] = anon_sym_AMP_GT;
	v->a[48785] = anon_sym_AMP_GT_GT;
	v->a[48786] = anon_sym_LT_AMP;
	v->a[48787] = anon_sym_GT_AMP;
	v->a[48788] = anon_sym_GT_PIPE;
	v->a[48789] = anon_sym_LT_AMP_DASH;
	v->a[48790] = anon_sym_GT_AMP_DASH;
	v->a[48791] = anon_sym_LT_LT;
	v->a[48792] = anon_sym_LT_LT_DASH;
	v->a[48793] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48794] = anon_sym_AMP;
	v->a[48795] = aux_sym_concatenation_token1;
	v->a[48796] = anon_sym_DOLLAR;
	v->a[48797] = sym__special_character;
	v->a[48798] = anon_sym_DQUOTE;
	v->a[48799] = sym_raw_string;
	small_parse_table_2440(v);
}

/* EOF small_parse_table_487.c */

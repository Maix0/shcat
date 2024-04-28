/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1327.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6635(t_small_parse_table_array *v)
{
	v->a[132700] = aux_sym_number_token1;
	v->a[132701] = aux_sym_number_token2;
	v->a[132702] = anon_sym_DOLLAR_LPAREN;
	v->a[132703] = anon_sym_BQUOTE;
	v->a[132704] = aux_sym__simple_variable_name_token1;
	v->a[132705] = sym_word;
	v->a[132706] = actions(1310);
	v->a[132707] = 26;
	v->a[132708] = sym_file_descriptor;
	v->a[132709] = sym__concat;
	v->a[132710] = sym_variable_name;
	v->a[132711] = sym_test_operator;
	v->a[132712] = sym__brace_start;
	v->a[132713] = anon_sym_LPAREN_LPAREN;
	v->a[132714] = anon_sym_PIPE_PIPE;
	v->a[132715] = anon_sym_AMP_AMP;
	v->a[132716] = anon_sym_GT_GT;
	v->a[132717] = anon_sym_PIPE_AMP;
	v->a[132718] = anon_sym_AMP_GT_GT;
	v->a[132719] = anon_sym_GT_PIPE;
	small_parse_table_6636(v);
}

void	small_parse_table_6636(t_small_parse_table_array *v)
{
	v->a[132720] = anon_sym_LT_AMP_DASH;
	v->a[132721] = anon_sym_GT_AMP_DASH;
	v->a[132722] = anon_sym_LT_LT_DASH;
	v->a[132723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[132724] = anon_sym_DOLLAR_LBRACK;
	v->a[132725] = aux_sym_concatenation_token1;
	v->a[132726] = sym__special_character;
	v->a[132727] = anon_sym_DQUOTE;
	v->a[132728] = sym_raw_string;
	v->a[132729] = sym_ansi_c_string;
	v->a[132730] = anon_sym_DOLLAR_LBRACE;
	v->a[132731] = anon_sym_DOLLAR_BQUOTE;
	v->a[132732] = anon_sym_LT_LPAREN;
	v->a[132733] = anon_sym_GT_LPAREN;
	v->a[132734] = 3;
	v->a[132735] = actions(71);
	v->a[132736] = 1;
	v->a[132737] = sym_comment;
	v->a[132738] = actions(1304);
	v->a[132739] = 14;
	small_parse_table_6637(v);
}

void	small_parse_table_6637(t_small_parse_table_array *v)
{
	v->a[132740] = anon_sym_PIPE;
	v->a[132741] = anon_sym_LT;
	v->a[132742] = anon_sym_GT;
	v->a[132743] = anon_sym_LT_LT;
	v->a[132744] = anon_sym_AMP_GT;
	v->a[132745] = anon_sym_LT_AMP;
	v->a[132746] = anon_sym_GT_AMP;
	v->a[132747] = anon_sym_DOLLAR;
	v->a[132748] = aux_sym_number_token1;
	v->a[132749] = aux_sym_number_token2;
	v->a[132750] = anon_sym_DOLLAR_LPAREN;
	v->a[132751] = anon_sym_BQUOTE;
	v->a[132752] = aux_sym__simple_variable_name_token1;
	v->a[132753] = sym_word;
	v->a[132754] = actions(1306);
	v->a[132755] = 26;
	v->a[132756] = sym_file_descriptor;
	v->a[132757] = sym__concat;
	v->a[132758] = sym_variable_name;
	v->a[132759] = sym_test_operator;
	small_parse_table_6638(v);
}

void	small_parse_table_6638(t_small_parse_table_array *v)
{
	v->a[132760] = sym__brace_start;
	v->a[132761] = anon_sym_LPAREN_LPAREN;
	v->a[132762] = anon_sym_PIPE_PIPE;
	v->a[132763] = anon_sym_AMP_AMP;
	v->a[132764] = anon_sym_GT_GT;
	v->a[132765] = anon_sym_PIPE_AMP;
	v->a[132766] = anon_sym_AMP_GT_GT;
	v->a[132767] = anon_sym_GT_PIPE;
	v->a[132768] = anon_sym_LT_AMP_DASH;
	v->a[132769] = anon_sym_GT_AMP_DASH;
	v->a[132770] = anon_sym_LT_LT_DASH;
	v->a[132771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[132772] = anon_sym_DOLLAR_LBRACK;
	v->a[132773] = aux_sym_concatenation_token1;
	v->a[132774] = sym__special_character;
	v->a[132775] = anon_sym_DQUOTE;
	v->a[132776] = sym_raw_string;
	v->a[132777] = sym_ansi_c_string;
	v->a[132778] = anon_sym_DOLLAR_LBRACE;
	v->a[132779] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6639(v);
}

void	small_parse_table_6639(t_small_parse_table_array *v)
{
	v->a[132780] = anon_sym_LT_LPAREN;
	v->a[132781] = anon_sym_GT_LPAREN;
	v->a[132782] = 3;
	v->a[132783] = actions(71);
	v->a[132784] = 1;
	v->a[132785] = sym_comment;
	v->a[132786] = actions(1308);
	v->a[132787] = 14;
	v->a[132788] = anon_sym_PIPE;
	v->a[132789] = anon_sym_LT;
	v->a[132790] = anon_sym_GT;
	v->a[132791] = anon_sym_LT_LT;
	v->a[132792] = anon_sym_AMP_GT;
	v->a[132793] = anon_sym_LT_AMP;
	v->a[132794] = anon_sym_GT_AMP;
	v->a[132795] = anon_sym_DOLLAR;
	v->a[132796] = aux_sym_number_token1;
	v->a[132797] = aux_sym_number_token2;
	v->a[132798] = anon_sym_DOLLAR_LPAREN;
	v->a[132799] = anon_sym_BQUOTE;
	small_parse_table_6640(v);
}

/* EOF small_parse_table_1327.c */

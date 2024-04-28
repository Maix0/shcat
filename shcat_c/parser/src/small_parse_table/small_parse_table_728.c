/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_728.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3640(t_small_parse_table_array *v)
{
	v->a[72800] = sym__special_character;
	v->a[72801] = anon_sym_DQUOTE;
	v->a[72802] = sym_raw_string;
	v->a[72803] = sym_ansi_c_string;
	v->a[72804] = aux_sym_number_token1;
	v->a[72805] = aux_sym_number_token2;
	v->a[72806] = anon_sym_DOLLAR_LBRACE;
	v->a[72807] = anon_sym_DOLLAR_LPAREN;
	v->a[72808] = anon_sym_BQUOTE;
	v->a[72809] = anon_sym_DOLLAR_BQUOTE;
	v->a[72810] = anon_sym_LT_LPAREN;
	v->a[72811] = anon_sym_GT_LPAREN;
	v->a[72812] = sym_word;
	v->a[72813] = 3;
	v->a[72814] = actions(3);
	v->a[72815] = 1;
	v->a[72816] = sym_comment;
	v->a[72817] = actions(1310);
	v->a[72818] = 6;
	v->a[72819] = sym_file_descriptor;
	small_parse_table_3641(v);
}

void	small_parse_table_3641(t_small_parse_table_array *v)
{
	v->a[72820] = sym__concat;
	v->a[72821] = sym_variable_name;
	v->a[72822] = sym_test_operator;
	v->a[72823] = sym__brace_start;
	v->a[72824] = aux_sym_heredoc_redirect_token1;
	v->a[72825] = actions(1308);
	v->a[72826] = 39;
	v->a[72827] = anon_sym_LPAREN_LPAREN;
	v->a[72828] = anon_sym_SEMI;
	v->a[72829] = anon_sym_PIPE_PIPE;
	v->a[72830] = anon_sym_AMP_AMP;
	v->a[72831] = anon_sym_PIPE;
	v->a[72832] = anon_sym_AMP;
	v->a[72833] = anon_sym_LT;
	v->a[72834] = anon_sym_GT;
	v->a[72835] = anon_sym_LT_LT;
	v->a[72836] = anon_sym_GT_GT;
	v->a[72837] = anon_sym_RPAREN;
	v->a[72838] = anon_sym_SEMI_SEMI;
	v->a[72839] = anon_sym_PIPE_AMP;
	small_parse_table_3642(v);
}

void	small_parse_table_3642(t_small_parse_table_array *v)
{
	v->a[72840] = anon_sym_AMP_GT;
	v->a[72841] = anon_sym_AMP_GT_GT;
	v->a[72842] = anon_sym_LT_AMP;
	v->a[72843] = anon_sym_GT_AMP;
	v->a[72844] = anon_sym_GT_PIPE;
	v->a[72845] = anon_sym_LT_AMP_DASH;
	v->a[72846] = anon_sym_GT_AMP_DASH;
	v->a[72847] = anon_sym_LT_LT_DASH;
	v->a[72848] = anon_sym_LT_LT_LT;
	v->a[72849] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72850] = anon_sym_DOLLAR_LBRACK;
	v->a[72851] = aux_sym_concatenation_token1;
	v->a[72852] = anon_sym_DOLLAR;
	v->a[72853] = sym__special_character;
	v->a[72854] = anon_sym_DQUOTE;
	v->a[72855] = sym_raw_string;
	v->a[72856] = sym_ansi_c_string;
	v->a[72857] = aux_sym_number_token1;
	v->a[72858] = aux_sym_number_token2;
	v->a[72859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3643(v);
}

void	small_parse_table_3643(t_small_parse_table_array *v)
{
	v->a[72860] = anon_sym_DOLLAR_LPAREN;
	v->a[72861] = anon_sym_BQUOTE;
	v->a[72862] = anon_sym_DOLLAR_BQUOTE;
	v->a[72863] = anon_sym_LT_LPAREN;
	v->a[72864] = anon_sym_GT_LPAREN;
	v->a[72865] = sym_word;
	v->a[72866] = 5;
	v->a[72867] = actions(3);
	v->a[72868] = 1;
	v->a[72869] = sym_comment;
	v->a[72870] = actions(5753);
	v->a[72871] = 1;
	v->a[72872] = sym__special_character;
	v->a[72873] = state(1608);
	v->a[72874] = 1;
	v->a[72875] = aux_sym__literal_repeat1;
	v->a[72876] = actions(5395);
	v->a[72877] = 5;
	v->a[72878] = sym_file_descriptor;
	v->a[72879] = sym_variable_name;
	small_parse_table_3644(v);
}

void	small_parse_table_3644(t_small_parse_table_array *v)
{
	v->a[72880] = sym_test_operator;
	v->a[72881] = sym__brace_start;
	v->a[72882] = aux_sym_heredoc_redirect_token1;
	v->a[72883] = actions(5393);
	v->a[72884] = 38;
	v->a[72885] = anon_sym_LPAREN_LPAREN;
	v->a[72886] = anon_sym_SEMI;
	v->a[72887] = anon_sym_PIPE_PIPE;
	v->a[72888] = anon_sym_AMP_AMP;
	v->a[72889] = anon_sym_PIPE;
	v->a[72890] = anon_sym_AMP;
	v->a[72891] = anon_sym_LT;
	v->a[72892] = anon_sym_GT;
	v->a[72893] = anon_sym_LT_LT;
	v->a[72894] = anon_sym_GT_GT;
	v->a[72895] = anon_sym_SEMI_SEMI;
	v->a[72896] = anon_sym_SEMI_AMP;
	v->a[72897] = anon_sym_SEMI_SEMI_AMP;
	v->a[72898] = anon_sym_PIPE_AMP;
	v->a[72899] = anon_sym_AMP_GT;
	small_parse_table_3645(v);
}

/* EOF small_parse_table_728.c */

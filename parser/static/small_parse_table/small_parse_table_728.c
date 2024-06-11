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
	v->a[72800] = sym_heredoc_redirect;
	v->a[72801] = aux_sym_redirected_statement_repeat1;
	v->a[72802] = actions(809);
	v->a[72803] = 18;
	v->a[72804] = anon_sym_RPAREN;
	v->a[72805] = anon_sym_SEMI_SEMI;
	v->a[72806] = anon_sym_AMP_AMP;
	v->a[72807] = anon_sym_PIPE_PIPE;
	v->a[72808] = anon_sym_LT;
	v->a[72809] = anon_sym_GT;
	v->a[72810] = anon_sym_GT_GT;
	v->a[72811] = anon_sym_AMP_GT;
	v->a[72812] = anon_sym_AMP_GT_GT;
	v->a[72813] = anon_sym_LT_AMP;
	v->a[72814] = anon_sym_GT_AMP;
	v->a[72815] = anon_sym_GT_PIPE;
	v->a[72816] = anon_sym_LT_AMP_DASH;
	v->a[72817] = anon_sym_GT_AMP_DASH;
	v->a[72818] = anon_sym_LT_LT;
	v->a[72819] = anon_sym_LT_LT_DASH;
	small_parse_table_3641(v);
}

void	small_parse_table_3641(t_small_parse_table_array *v)
{
	v->a[72820] = anon_sym_AMP;
	v->a[72821] = anon_sym_SEMI;
	v->a[72822] = 10;
	v->a[72823] = actions(3);
	v->a[72824] = 1;
	v->a[72825] = sym_comment;
	v->a[72826] = actions(807);
	v->a[72827] = 1;
	v->a[72828] = anon_sym_PIPE;
	v->a[72829] = actions(2600);
	v->a[72830] = 1;
	v->a[72831] = aux_sym_heredoc_redirect_token1;
	v->a[72832] = actions(2602);
	v->a[72833] = 1;
	v->a[72834] = sym_file_descriptor;
	v->a[72835] = actions(861);
	v->a[72836] = 2;
	v->a[72837] = anon_sym_LT_LT;
	v->a[72838] = anon_sym_LT_LT_DASH;
	v->a[72839] = actions(965);
	small_parse_table_3642(v);
}

void	small_parse_table_3642(t_small_parse_table_array *v)
{
	v->a[72840] = 2;
	v->a[72841] = anon_sym_AMP_AMP;
	v->a[72842] = anon_sym_PIPE_PIPE;
	v->a[72843] = actions(2598);
	v->a[72844] = 2;
	v->a[72845] = anon_sym_LT_AMP_DASH;
	v->a[72846] = anon_sym_GT_AMP_DASH;
	v->a[72847] = actions(1041);
	v->a[72848] = 3;
	v->a[72849] = anon_sym_SEMI_SEMI;
	v->a[72850] = anon_sym_AMP;
	v->a[72851] = anon_sym_SEMI;
	v->a[72852] = state(1322);
	v->a[72853] = 3;
	v->a[72854] = sym_file_redirect;
	v->a[72855] = sym_heredoc_redirect;
	v->a[72856] = aux_sym_redirected_statement_repeat1;
	v->a[72857] = actions(2596);
	v->a[72858] = 8;
	v->a[72859] = anon_sym_LT;
	small_parse_table_3643(v);
}

void	small_parse_table_3643(t_small_parse_table_array *v)
{
	v->a[72860] = anon_sym_GT;
	v->a[72861] = anon_sym_GT_GT;
	v->a[72862] = anon_sym_AMP_GT;
	v->a[72863] = anon_sym_AMP_GT_GT;
	v->a[72864] = anon_sym_LT_AMP;
	v->a[72865] = anon_sym_GT_AMP;
	v->a[72866] = anon_sym_GT_PIPE;
	v->a[72867] = 3;
	v->a[72868] = actions(3);
	v->a[72869] = 1;
	v->a[72870] = sym_comment;
	v->a[72871] = actions(1076);
	v->a[72872] = 3;
	v->a[72873] = sym_file_descriptor;
	v->a[72874] = sym__concat;
	v->a[72875] = sym_variable_name;
	v->a[72876] = actions(1074);
	v->a[72877] = 20;
	v->a[72878] = anon_sym_LT;
	v->a[72879] = anon_sym_GT;
	small_parse_table_3644(v);
}

void	small_parse_table_3644(t_small_parse_table_array *v)
{
	v->a[72880] = anon_sym_GT_GT;
	v->a[72881] = anon_sym_AMP_GT;
	v->a[72882] = anon_sym_AMP_GT_GT;
	v->a[72883] = anon_sym_LT_AMP;
	v->a[72884] = anon_sym_GT_AMP;
	v->a[72885] = anon_sym_GT_PIPE;
	v->a[72886] = anon_sym_LT_AMP_DASH;
	v->a[72887] = anon_sym_GT_AMP_DASH;
	v->a[72888] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72889] = aux_sym_concatenation_token1;
	v->a[72890] = anon_sym_DOLLAR;
	v->a[72891] = anon_sym_DQUOTE;
	v->a[72892] = sym_raw_string;
	v->a[72893] = sym_number;
	v->a[72894] = anon_sym_DOLLAR_LBRACE;
	v->a[72895] = anon_sym_DOLLAR_LPAREN;
	v->a[72896] = anon_sym_BQUOTE;
	v->a[72897] = sym_word;
	v->a[72898] = 3;
	v->a[72899] = actions(3);
	small_parse_table_3645(v);
}

/* EOF small_parse_table_728.c */

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
	v->a[72800] = state(1375);
	v->a[72801] = 1;
	v->a[72802] = aux_sym_case_statement_repeat1;
	v->a[72803] = state(1923);
	v->a[72804] = 1;
	v->a[72805] = sym_case_item;
	v->a[72806] = state(2134);
	v->a[72807] = 1;
	v->a[72808] = sym__case_item_last;
	v->a[72809] = state(2078);
	v->a[72810] = 2;
	v->a[72811] = sym_concatenation;
	v->a[72812] = sym__extglob_blob;
	v->a[72813] = actions(1875);
	v->a[72814] = 3;
	v->a[72815] = sym_raw_string;
	v->a[72816] = sym_number;
	v->a[72817] = sym_word;
	v->a[72818] = state(2004);
	v->a[72819] = 5;
	small_parse_table_3641(v);
}

void	small_parse_table_3641(t_small_parse_table_array *v)
{
	v->a[72820] = sym_arithmetic_expansion;
	v->a[72821] = sym_string;
	v->a[72822] = sym_simple_expansion;
	v->a[72823] = sym_expansion;
	v->a[72824] = sym_command_substitution;
	v->a[72825] = 5;
	v->a[72826] = actions(3);
	v->a[72827] = 1;
	v->a[72828] = sym_comment;
	v->a[72829] = actions(2472);
	v->a[72830] = 1;
	v->a[72831] = anon_sym_PIPE;
	v->a[72832] = state(1315);
	v->a[72833] = 1;
	v->a[72834] = aux_sym_pipeline_repeat1;
	v->a[72835] = actions(2440);
	v->a[72836] = 2;
	v->a[72837] = sym_file_descriptor;
	v->a[72838] = aux_sym_heredoc_redirect_token1;
	v->a[72839] = actions(2444);
	small_parse_table_3642(v);
}

void	small_parse_table_3642(t_small_parse_table_array *v)
{
	v->a[72840] = 18;
	v->a[72841] = anon_sym_RPAREN;
	v->a[72842] = anon_sym_SEMI_SEMI;
	v->a[72843] = anon_sym_AMP_AMP;
	v->a[72844] = anon_sym_PIPE_PIPE;
	v->a[72845] = anon_sym_LT;
	v->a[72846] = anon_sym_GT;
	v->a[72847] = anon_sym_GT_GT;
	v->a[72848] = anon_sym_AMP_GT;
	v->a[72849] = anon_sym_AMP_GT_GT;
	v->a[72850] = anon_sym_LT_AMP;
	v->a[72851] = anon_sym_GT_AMP;
	v->a[72852] = anon_sym_GT_PIPE;
	v->a[72853] = anon_sym_LT_AMP_DASH;
	v->a[72854] = anon_sym_GT_AMP_DASH;
	v->a[72855] = anon_sym_LT_LT;
	v->a[72856] = anon_sym_LT_LT_DASH;
	v->a[72857] = anon_sym_AMP;
	v->a[72858] = anon_sym_SEMI;
	v->a[72859] = 5;
	small_parse_table_3643(v);
}

void	small_parse_table_3643(t_small_parse_table_array *v)
{
	v->a[72860] = actions(3);
	v->a[72861] = 1;
	v->a[72862] = sym_comment;
	v->a[72863] = actions(2474);
	v->a[72864] = 1;
	v->a[72865] = anon_sym_PIPE;
	v->a[72866] = state(1315);
	v->a[72867] = 1;
	v->a[72868] = aux_sym_pipeline_repeat1;
	v->a[72869] = actions(2186);
	v->a[72870] = 2;
	v->a[72871] = sym_file_descriptor;
	v->a[72872] = aux_sym_heredoc_redirect_token1;
	v->a[72873] = actions(2191);
	v->a[72874] = 18;
	v->a[72875] = anon_sym_RPAREN;
	v->a[72876] = anon_sym_SEMI_SEMI;
	v->a[72877] = anon_sym_AMP_AMP;
	v->a[72878] = anon_sym_PIPE_PIPE;
	v->a[72879] = anon_sym_LT;
	small_parse_table_3644(v);
}

void	small_parse_table_3644(t_small_parse_table_array *v)
{
	v->a[72880] = anon_sym_GT;
	v->a[72881] = anon_sym_GT_GT;
	v->a[72882] = anon_sym_AMP_GT;
	v->a[72883] = anon_sym_AMP_GT_GT;
	v->a[72884] = anon_sym_LT_AMP;
	v->a[72885] = anon_sym_GT_AMP;
	v->a[72886] = anon_sym_GT_PIPE;
	v->a[72887] = anon_sym_LT_AMP_DASH;
	v->a[72888] = anon_sym_GT_AMP_DASH;
	v->a[72889] = anon_sym_LT_LT;
	v->a[72890] = anon_sym_LT_LT_DASH;
	v->a[72891] = anon_sym_AMP;
	v->a[72892] = anon_sym_SEMI;
	v->a[72893] = 5;
	v->a[72894] = actions(3);
	v->a[72895] = 1;
	v->a[72896] = sym_comment;
	v->a[72897] = actions(2477);
	v->a[72898] = 1;
	v->a[72899] = anon_sym_PIPE;
	small_parse_table_3645(v);
}

/* EOF small_parse_table_728.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2898.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14490(t_small_parse_table_array *v)
{
	v->a[289800] = anon_sym_LT;
	v->a[289801] = anon_sym_GT;
	v->a[289802] = anon_sym_LT_LT;
	v->a[289803] = anon_sym_AMP_GT;
	v->a[289804] = anon_sym_LT_AMP;
	v->a[289805] = anon_sym_GT_AMP;
	v->a[289806] = actions(4372);
	v->a[289807] = 12;
	v->a[289808] = sym_file_descriptor;
	v->a[289809] = anon_sym_PIPE_PIPE;
	v->a[289810] = anon_sym_AMP_AMP;
	v->a[289811] = anon_sym_GT_GT;
	v->a[289812] = anon_sym_PIPE_AMP;
	v->a[289813] = anon_sym_RBRACK;
	v->a[289814] = anon_sym_AMP_GT_GT;
	v->a[289815] = anon_sym_GT_PIPE;
	v->a[289816] = anon_sym_LT_AMP_DASH;
	v->a[289817] = anon_sym_GT_AMP_DASH;
	v->a[289818] = anon_sym_LT_LT_DASH;
	v->a[289819] = anon_sym_LT_LT_LT;
	small_parse_table_14491(v);
}

void	small_parse_table_14491(t_small_parse_table_array *v)
{
	v->a[289820] = 5;
	v->a[289821] = actions(71);
	v->a[289822] = 1;
	v->a[289823] = sym_comment;
	v->a[289824] = actions(12908);
	v->a[289825] = 1;
	v->a[289826] = sym__special_character;
	v->a[289827] = state(5520);
	v->a[289828] = 1;
	v->a[289829] = aux_sym__literal_repeat1;
	v->a[289830] = actions(4467);
	v->a[289831] = 7;
	v->a[289832] = anon_sym_PIPE;
	v->a[289833] = anon_sym_LT;
	v->a[289834] = anon_sym_GT;
	v->a[289835] = anon_sym_LT_LT;
	v->a[289836] = anon_sym_AMP_GT;
	v->a[289837] = anon_sym_LT_AMP;
	v->a[289838] = anon_sym_GT_AMP;
	v->a[289839] = actions(4469);
	small_parse_table_14492(v);
}

void	small_parse_table_14492(t_small_parse_table_array *v)
{
	v->a[289840] = 10;
	v->a[289841] = sym_file_descriptor;
	v->a[289842] = anon_sym_PIPE_PIPE;
	v->a[289843] = anon_sym_AMP_AMP;
	v->a[289844] = anon_sym_GT_GT;
	v->a[289845] = anon_sym_PIPE_AMP;
	v->a[289846] = anon_sym_AMP_GT_GT;
	v->a[289847] = anon_sym_GT_PIPE;
	v->a[289848] = anon_sym_LT_AMP_DASH;
	v->a[289849] = anon_sym_GT_AMP_DASH;
	v->a[289850] = anon_sym_LT_LT_DASH;
	v->a[289851] = 9;
	v->a[289852] = actions(3);
	v->a[289853] = 1;
	v->a[289854] = sym_comment;
	v->a[289855] = actions(3727);
	v->a[289856] = 1;
	v->a[289857] = anon_sym_LT_LT_LT;
	v->a[289858] = actions(3751);
	v->a[289859] = 1;
	small_parse_table_14493(v);
}

void	small_parse_table_14493(t_small_parse_table_array *v)
{
	v->a[289860] = sym_file_descriptor;
	v->a[289861] = actions(12944);
	v->a[289862] = 1;
	v->a[289863] = aux_sym_heredoc_redirect_token1;
	v->a[289864] = state(6835);
	v->a[289865] = 1;
	v->a[289866] = sym__heredoc_expression;
	v->a[289867] = actions(3717);
	v->a[289868] = 2;
	v->a[289869] = anon_sym_PIPE_PIPE;
	v->a[289870] = anon_sym_AMP_AMP;
	v->a[289871] = actions(3723);
	v->a[289872] = 2;
	v->a[289873] = anon_sym_LT_AMP_DASH;
	v->a[289874] = anon_sym_GT_AMP_DASH;
	v->a[289875] = state(5609);
	v->a[289876] = 3;
	v->a[289877] = sym_file_redirect;
	v->a[289878] = sym_herestring_redirect;
	v->a[289879] = aux_sym_redirected_statement_repeat2;
	small_parse_table_14494(v);
}

void	small_parse_table_14494(t_small_parse_table_array *v)
{
	v->a[289880] = actions(3721);
	v->a[289881] = 8;
	v->a[289882] = anon_sym_LT;
	v->a[289883] = anon_sym_GT;
	v->a[289884] = anon_sym_GT_GT;
	v->a[289885] = anon_sym_AMP_GT;
	v->a[289886] = anon_sym_AMP_GT_GT;
	v->a[289887] = anon_sym_LT_AMP;
	v->a[289888] = anon_sym_GT_AMP;
	v->a[289889] = anon_sym_GT_PIPE;
	v->a[289890] = 9;
	v->a[289891] = actions(3);
	v->a[289892] = 1;
	v->a[289893] = sym_comment;
	v->a[289894] = actions(3727);
	v->a[289895] = 1;
	v->a[289896] = anon_sym_LT_LT_LT;
	v->a[289897] = actions(3751);
	v->a[289898] = 1;
	v->a[289899] = sym_file_descriptor;
	small_parse_table_14495(v);
}

/* EOF small_parse_table_2898.c */

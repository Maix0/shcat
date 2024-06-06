/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1038.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5190(t_small_parse_table_array *v)
{
	v->a[103800] = 2;
	v->a[103801] = anon_sym_PIPE;
	v->a[103802] = anon_sym_PIPE_AMP;
	v->a[103803] = actions(2945);
	v->a[103804] = 2;
	v->a[103805] = anon_sym_LT_LT;
	v->a[103806] = anon_sym_LT_LT_DASH;
	v->a[103807] = actions(3300);
	v->a[103808] = 2;
	v->a[103809] = anon_sym_AMP_AMP;
	v->a[103810] = anon_sym_PIPE_PIPE;
	v->a[103811] = actions(5968);
	v->a[103812] = 2;
	v->a[103813] = anon_sym_LT_AMP_DASH;
	v->a[103814] = anon_sym_GT_AMP_DASH;
	v->a[103815] = actions(3364);
	v->a[103816] = 3;
	v->a[103817] = anon_sym_SEMI_SEMI;
	v->a[103818] = anon_sym_AMP;
	v->a[103819] = anon_sym_SEMI;
	small_parse_table_5191(v);
}

void	small_parse_table_5191(t_small_parse_table_array *v)
{
	v->a[103820] = state(2295);
	v->a[103821] = 3;
	v->a[103822] = sym_file_redirect;
	v->a[103823] = sym_heredoc_redirect;
	v->a[103824] = aux_sym_redirected_statement_repeat1;
	v->a[103825] = actions(5966);
	v->a[103826] = 8;
	v->a[103827] = anon_sym_LT;
	v->a[103828] = anon_sym_GT;
	v->a[103829] = anon_sym_GT_GT;
	v->a[103830] = anon_sym_AMP_GT;
	v->a[103831] = anon_sym_AMP_GT_GT;
	v->a[103832] = anon_sym_LT_AMP;
	v->a[103833] = anon_sym_GT_AMP;
	v->a[103834] = anon_sym_GT_PIPE;
	v->a[103835] = 5;
	v->a[103836] = actions(3);
	v->a[103837] = 1;
	v->a[103838] = sym_comment;
	v->a[103839] = actions(5972);
	small_parse_table_5192(v);
}

void	small_parse_table_5192(t_small_parse_table_array *v)
{
	v->a[103840] = 1;
	v->a[103841] = sym_variable_name;
	v->a[103842] = actions(5183);
	v->a[103843] = 2;
	v->a[103844] = sym_file_descriptor;
	v->a[103845] = aux_sym_heredoc_redirect_token1;
	v->a[103846] = state(2165);
	v->a[103847] = 2;
	v->a[103848] = sym_variable_assignment;
	v->a[103849] = aux_sym_variable_assignments_repeat1;
	v->a[103850] = actions(5181);
	v->a[103851] = 19;
	v->a[103852] = anon_sym_PIPE;
	v->a[103853] = anon_sym_SEMI_SEMI;
	v->a[103854] = anon_sym_PIPE_AMP;
	v->a[103855] = anon_sym_AMP_AMP;
	v->a[103856] = anon_sym_PIPE_PIPE;
	v->a[103857] = anon_sym_LT;
	v->a[103858] = anon_sym_GT;
	v->a[103859] = anon_sym_GT_GT;
	small_parse_table_5193(v);
}

void	small_parse_table_5193(t_small_parse_table_array *v)
{
	v->a[103860] = anon_sym_AMP_GT;
	v->a[103861] = anon_sym_AMP_GT_GT;
	v->a[103862] = anon_sym_LT_AMP;
	v->a[103863] = anon_sym_GT_AMP;
	v->a[103864] = anon_sym_GT_PIPE;
	v->a[103865] = anon_sym_LT_AMP_DASH;
	v->a[103866] = anon_sym_GT_AMP_DASH;
	v->a[103867] = anon_sym_LT_LT;
	v->a[103868] = anon_sym_LT_LT_DASH;
	v->a[103869] = anon_sym_AMP;
	v->a[103870] = anon_sym_SEMI;
	v->a[103871] = 5;
	v->a[103872] = actions(3);
	v->a[103873] = 1;
	v->a[103874] = sym_comment;
	v->a[103875] = actions(5975);
	v->a[103876] = 1;
	v->a[103877] = sym_variable_name;
	v->a[103878] = actions(5145);
	v->a[103879] = 2;
	small_parse_table_5194(v);
}

void	small_parse_table_5194(t_small_parse_table_array *v)
{
	v->a[103880] = sym_file_descriptor;
	v->a[103881] = aux_sym_heredoc_redirect_token1;
	v->a[103882] = state(2165);
	v->a[103883] = 2;
	v->a[103884] = sym_variable_assignment;
	v->a[103885] = aux_sym_variable_assignments_repeat1;
	v->a[103886] = actions(5143);
	v->a[103887] = 19;
	v->a[103888] = anon_sym_PIPE;
	v->a[103889] = anon_sym_SEMI_SEMI;
	v->a[103890] = anon_sym_PIPE_AMP;
	v->a[103891] = anon_sym_AMP_AMP;
	v->a[103892] = anon_sym_PIPE_PIPE;
	v->a[103893] = anon_sym_LT;
	v->a[103894] = anon_sym_GT;
	v->a[103895] = anon_sym_GT_GT;
	v->a[103896] = anon_sym_AMP_GT;
	v->a[103897] = anon_sym_AMP_GT_GT;
	v->a[103898] = anon_sym_LT_AMP;
	v->a[103899] = anon_sym_GT_AMP;
	small_parse_table_5195(v);
}

/* EOF small_parse_table_1038.c */

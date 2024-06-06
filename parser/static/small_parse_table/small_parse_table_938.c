/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_938.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4690(t_small_parse_table_array *v)
{
	v->a[93800] = anon_sym_GT;
	v->a[93801] = anon_sym_GT_GT;
	v->a[93802] = anon_sym_AMP_GT;
	v->a[93803] = anon_sym_AMP_GT_GT;
	v->a[93804] = anon_sym_LT_AMP;
	v->a[93805] = anon_sym_GT_AMP;
	v->a[93806] = anon_sym_GT_PIPE;
	v->a[93807] = anon_sym_LT_AMP_DASH;
	v->a[93808] = anon_sym_GT_AMP_DASH;
	v->a[93809] = anon_sym_LT_LT;
	v->a[93810] = anon_sym_LT_LT_DASH;
	v->a[93811] = anon_sym_AMP;
	v->a[93812] = anon_sym_SEMI;
	v->a[93813] = 3;
	v->a[93814] = actions(3);
	v->a[93815] = 1;
	v->a[93816] = sym_comment;
	v->a[93817] = actions(2888);
	v->a[93818] = 5;
	v->a[93819] = sym_file_descriptor;
	small_parse_table_4691(v);
}

void	small_parse_table_4691(t_small_parse_table_array *v)
{
	v->a[93820] = sym__concat;
	v->a[93821] = sym_variable_name;
	v->a[93822] = ts_builtin_sym_end;
	v->a[93823] = aux_sym_heredoc_redirect_token1;
	v->a[93824] = actions(2886);
	v->a[93825] = 22;
	v->a[93826] = anon_sym_PIPE;
	v->a[93827] = anon_sym_RPAREN;
	v->a[93828] = anon_sym_SEMI_SEMI;
	v->a[93829] = anon_sym_PIPE_AMP;
	v->a[93830] = anon_sym_AMP_AMP;
	v->a[93831] = anon_sym_PIPE_PIPE;
	v->a[93832] = anon_sym_LT;
	v->a[93833] = anon_sym_GT;
	v->a[93834] = anon_sym_GT_GT;
	v->a[93835] = anon_sym_AMP_GT;
	v->a[93836] = anon_sym_AMP_GT_GT;
	v->a[93837] = anon_sym_LT_AMP;
	v->a[93838] = anon_sym_GT_AMP;
	v->a[93839] = anon_sym_GT_PIPE;
	small_parse_table_4692(v);
}

void	small_parse_table_4692(t_small_parse_table_array *v)
{
	v->a[93840] = anon_sym_LT_AMP_DASH;
	v->a[93841] = anon_sym_GT_AMP_DASH;
	v->a[93842] = anon_sym_LT_LT;
	v->a[93843] = anon_sym_LT_LT_DASH;
	v->a[93844] = anon_sym_AMP;
	v->a[93845] = aux_sym_concatenation_token1;
	v->a[93846] = anon_sym_BQUOTE;
	v->a[93847] = anon_sym_SEMI;
	v->a[93848] = 11;
	v->a[93849] = actions(3);
	v->a[93850] = 1;
	v->a[93851] = sym_comment;
	v->a[93852] = actions(2642);
	v->a[93853] = 1;
	v->a[93854] = aux_sym_heredoc_redirect_token1;
	v->a[93855] = actions(5159);
	v->a[93856] = 1;
	v->a[93857] = sym_file_descriptor;
	v->a[93858] = actions(2516);
	v->a[93859] = 2;
	small_parse_table_4693(v);
}

void	small_parse_table_4693(t_small_parse_table_array *v)
{
	v->a[93860] = anon_sym_PIPE;
	v->a[93861] = anon_sym_PIPE_AMP;
	v->a[93862] = actions(2518);
	v->a[93863] = 2;
	v->a[93864] = anon_sym_AMP_AMP;
	v->a[93865] = anon_sym_PIPE_PIPE;
	v->a[93866] = actions(2520);
	v->a[93867] = 2;
	v->a[93868] = anon_sym_LT_LT;
	v->a[93869] = anon_sym_LT_LT_DASH;
	v->a[93870] = actions(2644);
	v->a[93871] = 2;
	v->a[93872] = anon_sym_AMP;
	v->a[93873] = anon_sym_SEMI;
	v->a[93874] = actions(5155);
	v->a[93875] = 2;
	v->a[93876] = anon_sym_LT_AMP_DASH;
	v->a[93877] = anon_sym_GT_AMP_DASH;
	v->a[93878] = state(1894);
	v->a[93879] = 3;
	small_parse_table_4694(v);
}

void	small_parse_table_4694(t_small_parse_table_array *v)
{
	v->a[93880] = sym_file_redirect;
	v->a[93881] = sym_heredoc_redirect;
	v->a[93882] = aux_sym_redirected_statement_repeat1;
	v->a[93883] = actions(1995);
	v->a[93884] = 4;
	v->a[93885] = anon_sym_esac;
	v->a[93886] = anon_sym_SEMI_SEMI;
	v->a[93887] = anon_sym_SEMI_AMP;
	v->a[93888] = anon_sym_SEMI_SEMI_AMP;
	v->a[93889] = actions(5153);
	v->a[93890] = 8;
	v->a[93891] = anon_sym_LT;
	v->a[93892] = anon_sym_GT;
	v->a[93893] = anon_sym_GT_GT;
	v->a[93894] = anon_sym_AMP_GT;
	v->a[93895] = anon_sym_AMP_GT_GT;
	v->a[93896] = anon_sym_LT_AMP;
	v->a[93897] = anon_sym_GT_AMP;
	v->a[93898] = anon_sym_GT_PIPE;
	v->a[93899] = 3;
	small_parse_table_4695(v);
}

/* EOF small_parse_table_938.c */

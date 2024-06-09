/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_708.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3540(t_small_parse_table_array *v)
{
	v->a[70800] = 8;
	v->a[70801] = anon_sym_LT;
	v->a[70802] = anon_sym_GT;
	v->a[70803] = anon_sym_GT_GT;
	v->a[70804] = anon_sym_AMP_GT;
	v->a[70805] = anon_sym_AMP_GT_GT;
	v->a[70806] = anon_sym_LT_AMP;
	v->a[70807] = anon_sym_GT_AMP;
	v->a[70808] = anon_sym_GT_PIPE;
	v->a[70809] = actions(2466);
	v->a[70810] = 8;
	v->a[70811] = anon_sym_PIPE;
	v->a[70812] = anon_sym_SEMI_SEMI;
	v->a[70813] = anon_sym_AMP_AMP;
	v->a[70814] = anon_sym_PIPE_PIPE;
	v->a[70815] = anon_sym_LT_LT;
	v->a[70816] = anon_sym_LT_LT_DASH;
	v->a[70817] = anon_sym_AMP;
	v->a[70818] = anon_sym_SEMI;
	v->a[70819] = 5;
	small_parse_table_3541(v);
}

void	small_parse_table_3541(t_small_parse_table_array *v)
{
	v->a[70820] = actions(3);
	v->a[70821] = 1;
	v->a[70822] = sym_comment;
	v->a[70823] = actions(2638);
	v->a[70824] = 1;
	v->a[70825] = anon_sym_PIPE;
	v->a[70826] = state(1214);
	v->a[70827] = 1;
	v->a[70828] = aux_sym_pipeline_repeat1;
	v->a[70829] = actions(2247);
	v->a[70830] = 3;
	v->a[70831] = sym_file_descriptor;
	v->a[70832] = ts_builtin_sym_end;
	v->a[70833] = aux_sym_heredoc_redirect_token1;
	v->a[70834] = actions(2252);
	v->a[70835] = 17;
	v->a[70836] = anon_sym_SEMI_SEMI;
	v->a[70837] = anon_sym_AMP_AMP;
	v->a[70838] = anon_sym_PIPE_PIPE;
	v->a[70839] = anon_sym_LT;
	small_parse_table_3542(v);
}

void	small_parse_table_3542(t_small_parse_table_array *v)
{
	v->a[70840] = anon_sym_GT;
	v->a[70841] = anon_sym_GT_GT;
	v->a[70842] = anon_sym_AMP_GT;
	v->a[70843] = anon_sym_AMP_GT_GT;
	v->a[70844] = anon_sym_LT_AMP;
	v->a[70845] = anon_sym_GT_AMP;
	v->a[70846] = anon_sym_GT_PIPE;
	v->a[70847] = anon_sym_LT_AMP_DASH;
	v->a[70848] = anon_sym_GT_AMP_DASH;
	v->a[70849] = anon_sym_LT_LT;
	v->a[70850] = anon_sym_LT_LT_DASH;
	v->a[70851] = anon_sym_AMP;
	v->a[70852] = anon_sym_SEMI;
	v->a[70853] = 3;
	v->a[70854] = actions(3);
	v->a[70855] = 1;
	v->a[70856] = sym_comment;
	v->a[70857] = actions(1202);
	v->a[70858] = 2;
	v->a[70859] = sym_file_descriptor;
	small_parse_table_3543(v);
}

void	small_parse_table_3543(t_small_parse_table_array *v)
{
	v->a[70860] = sym_variable_name;
	v->a[70861] = actions(1198);
	v->a[70862] = 20;
	v->a[70863] = anon_sym_LT;
	v->a[70864] = anon_sym_GT;
	v->a[70865] = anon_sym_GT_GT;
	v->a[70866] = anon_sym_AMP_GT;
	v->a[70867] = anon_sym_AMP_GT_GT;
	v->a[70868] = anon_sym_LT_AMP;
	v->a[70869] = anon_sym_GT_AMP;
	v->a[70870] = anon_sym_GT_PIPE;
	v->a[70871] = anon_sym_LT_AMP_DASH;
	v->a[70872] = anon_sym_GT_AMP_DASH;
	v->a[70873] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70874] = anon_sym_DOLLAR;
	v->a[70875] = anon_sym_DQUOTE;
	v->a[70876] = sym_raw_string;
	v->a[70877] = aux_sym_number_token1;
	v->a[70878] = aux_sym_number_token2;
	v->a[70879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3544(v);
}

void	small_parse_table_3544(t_small_parse_table_array *v)
{
	v->a[70880] = anon_sym_DOLLAR_LPAREN;
	v->a[70881] = anon_sym_BQUOTE;
	v->a[70882] = sym_word;
	v->a[70883] = 13;
	v->a[70884] = actions(3);
	v->a[70885] = 1;
	v->a[70886] = sym_comment;
	v->a[70887] = actions(933);
	v->a[70888] = 1;
	v->a[70889] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70890] = actions(935);
	v->a[70891] = 1;
	v->a[70892] = anon_sym_DOLLAR;
	v->a[70893] = actions(937);
	v->a[70894] = 1;
	v->a[70895] = anon_sym_DQUOTE;
	v->a[70896] = actions(939);
	v->a[70897] = 1;
	v->a[70898] = aux_sym_number_token1;
	v->a[70899] = actions(941);
	small_parse_table_3545(v);
}

/* EOF small_parse_table_708.c */

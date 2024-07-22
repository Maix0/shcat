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
	v->a[70800] = anon_sym_PLUS3;
	v->a[70801] = 7;
	v->a[70802] = actions(3);
	v->a[70803] = 1;
	v->a[70804] = sym_comment;
	v->a[70805] = actions(1819);
	v->a[70806] = 1;
	v->a[70807] = anon_sym_PERCENT;
	v->a[70808] = actions(2817);
	v->a[70809] = 1;
	v->a[70810] = anon_sym_RBRACE;
	v->a[70811] = state(1965);
	v->a[70812] = 1;
	v->a[70813] = sym__expansion_expression;
	v->a[70814] = state(1968);
	v->a[70815] = 1;
	v->a[70816] = sym__expansion_regex;
	v->a[70817] = actions(1825);
	v->a[70818] = 3;
	v->a[70819] = sym__immediate_double_hash;
	small_parse_table_3541(v);
}

void	small_parse_table_3541(t_small_parse_table_array *v)
{
	v->a[70820] = anon_sym_POUND;
	v->a[70821] = anon_sym_PERCENT_PERCENT;
	v->a[70822] = actions(1823);
	v->a[70823] = 8;
	v->a[70824] = anon_sym_COLON_DASH;
	v->a[70825] = anon_sym_DASH3;
	v->a[70826] = anon_sym_COLON_EQ;
	v->a[70827] = anon_sym_EQ2;
	v->a[70828] = anon_sym_COLON_QMARK;
	v->a[70829] = anon_sym_QMARK2;
	v->a[70830] = anon_sym_COLON_PLUS;
	v->a[70831] = anon_sym_PLUS3;
	v->a[70832] = 5;
	v->a[70833] = actions(3);
	v->a[70834] = 1;
	v->a[70835] = sym_comment;
	v->a[70836] = actions(2819);
	v->a[70837] = 1;
	v->a[70838] = aux_sym_concatenation_token1;
	v->a[70839] = actions(2822);
	small_parse_table_3542(v);
}

void	small_parse_table_3542(t_small_parse_table_array *v)
{
	v->a[70840] = 1;
	v->a[70841] = sym__concat;
	v->a[70842] = state(1429);
	v->a[70843] = 1;
	v->a[70844] = aux_sym_concatenation_repeat1;
	v->a[70845] = actions(1105);
	v->a[70846] = 12;
	v->a[70847] = anon_sym_SEMI_SEMI;
	v->a[70848] = aux_sym_heredoc_redirect_token1;
	v->a[70849] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70850] = anon_sym_DOLLAR;
	v->a[70851] = anon_sym_DQUOTE;
	v->a[70852] = sym_raw_string;
	v->a[70853] = sym_number;
	v->a[70854] = anon_sym_DOLLAR_LBRACE;
	v->a[70855] = anon_sym_DOLLAR_LPAREN;
	v->a[70856] = anon_sym_BQUOTE;
	v->a[70857] = sym_word;
	v->a[70858] = anon_sym_SEMI;
	v->a[70859] = 7;
	small_parse_table_3543(v);
}

void	small_parse_table_3543(t_small_parse_table_array *v)
{
	v->a[70860] = actions(501);
	v->a[70861] = 1;
	v->a[70862] = sym_comment;
	v->a[70863] = actions(2825);
	v->a[70864] = 1;
	v->a[70865] = sym_file_descriptor;
	v->a[70866] = actions(2059);
	v->a[70867] = 2;
	v->a[70868] = anon_sym_PIPE;
	v->a[70869] = anon_sym_LT_LT;
	v->a[70870] = actions(2741);
	v->a[70871] = 2;
	v->a[70872] = anon_sym_LT;
	v->a[70873] = anon_sym_GT;
	v->a[70874] = state(1436);
	v->a[70875] = 2;
	v->a[70876] = sym_file_redirect;
	v->a[70877] = aux_sym_redirected_statement_repeat2;
	v->a[70878] = actions(2061);
	v->a[70879] = 3;
	small_parse_table_3544(v);
}

void	small_parse_table_3544(t_small_parse_table_array *v)
{
	v->a[70880] = anon_sym_AMP_AMP;
	v->a[70881] = anon_sym_PIPE_PIPE;
	v->a[70882] = anon_sym_LT_LT_DASH;
	v->a[70883] = actions(2743);
	v->a[70884] = 5;
	v->a[70885] = anon_sym_GT_GT;
	v->a[70886] = anon_sym_LT_AMP;
	v->a[70887] = anon_sym_GT_AMP;
	v->a[70888] = anon_sym_GT_PIPE;
	v->a[70889] = anon_sym_LT_GT;
	v->a[70890] = 8;
	v->a[70891] = actions(501);
	v->a[70892] = 1;
	v->a[70893] = sym_comment;
	v->a[70894] = actions(790);
	v->a[70895] = 1;
	v->a[70896] = anon_sym_LT_LT;
	v->a[70897] = actions(1945);
	v->a[70898] = 1;
	v->a[70899] = sym_file_descriptor;
	small_parse_table_3545(v);
}

/* EOF small_parse_table_708.c */

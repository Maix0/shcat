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
	v->a[70800] = 1;
	v->a[70801] = sym_comment;
	v->a[70802] = actions(5638);
	v->a[70803] = 1;
	v->a[70804] = aux_sym_concatenation_token1;
	v->a[70805] = actions(5640);
	v->a[70806] = 1;
	v->a[70807] = sym__concat;
	v->a[70808] = state(1661);
	v->a[70809] = 1;
	v->a[70810] = aux_sym_concatenation_repeat1;
	v->a[70811] = actions(4554);
	v->a[70812] = 5;
	v->a[70813] = sym_file_descriptor;
	v->a[70814] = sym_variable_name;
	v->a[70815] = sym_test_operator;
	v->a[70816] = sym__brace_start;
	v->a[70817] = aux_sym_heredoc_redirect_token1;
	v->a[70818] = actions(4552);
	v->a[70819] = 37;
	small_parse_table_3541(v);
}

void	small_parse_table_3541(t_small_parse_table_array *v)
{
	v->a[70820] = anon_sym_LPAREN_LPAREN;
	v->a[70821] = anon_sym_SEMI;
	v->a[70822] = anon_sym_PIPE_PIPE;
	v->a[70823] = anon_sym_AMP_AMP;
	v->a[70824] = anon_sym_PIPE;
	v->a[70825] = anon_sym_AMP;
	v->a[70826] = anon_sym_LT;
	v->a[70827] = anon_sym_GT;
	v->a[70828] = anon_sym_LT_LT;
	v->a[70829] = anon_sym_GT_GT;
	v->a[70830] = anon_sym_SEMI_SEMI;
	v->a[70831] = anon_sym_PIPE_AMP;
	v->a[70832] = anon_sym_AMP_GT;
	v->a[70833] = anon_sym_AMP_GT_GT;
	v->a[70834] = anon_sym_LT_AMP;
	v->a[70835] = anon_sym_GT_AMP;
	v->a[70836] = anon_sym_GT_PIPE;
	v->a[70837] = anon_sym_LT_AMP_DASH;
	v->a[70838] = anon_sym_GT_AMP_DASH;
	v->a[70839] = anon_sym_LT_LT_DASH;
	small_parse_table_3542(v);
}

void	small_parse_table_3542(t_small_parse_table_array *v)
{
	v->a[70840] = anon_sym_LT_LT_LT;
	v->a[70841] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70842] = anon_sym_DOLLAR_LBRACK;
	v->a[70843] = anon_sym_DOLLAR;
	v->a[70844] = sym__special_character;
	v->a[70845] = anon_sym_DQUOTE;
	v->a[70846] = sym_raw_string;
	v->a[70847] = sym_ansi_c_string;
	v->a[70848] = aux_sym_number_token1;
	v->a[70849] = aux_sym_number_token2;
	v->a[70850] = anon_sym_DOLLAR_LBRACE;
	v->a[70851] = anon_sym_DOLLAR_LPAREN;
	v->a[70852] = anon_sym_BQUOTE;
	v->a[70853] = anon_sym_DOLLAR_BQUOTE;
	v->a[70854] = anon_sym_LT_LPAREN;
	v->a[70855] = anon_sym_GT_LPAREN;
	v->a[70856] = sym_word;
	v->a[70857] = 3;
	v->a[70858] = actions(3);
	v->a[70859] = 1;
	small_parse_table_3543(v);
}

void	small_parse_table_3543(t_small_parse_table_array *v)
{
	v->a[70860] = sym_comment;
	v->a[70861] = actions(1330);
	v->a[70862] = 5;
	v->a[70863] = sym_file_descriptor;
	v->a[70864] = sym__concat;
	v->a[70865] = sym_test_operator;
	v->a[70866] = sym__brace_start;
	v->a[70867] = aux_sym_heredoc_redirect_token1;
	v->a[70868] = actions(1328);
	v->a[70869] = 40;
	v->a[70870] = anon_sym_LPAREN_LPAREN;
	v->a[70871] = anon_sym_SEMI;
	v->a[70872] = anon_sym_PIPE_PIPE;
	v->a[70873] = anon_sym_AMP_AMP;
	v->a[70874] = anon_sym_PIPE;
	v->a[70875] = anon_sym_AMP;
	v->a[70876] = anon_sym_LT;
	v->a[70877] = anon_sym_GT;
	v->a[70878] = anon_sym_LT_LT;
	v->a[70879] = anon_sym_GT_GT;
	small_parse_table_3544(v);
}

void	small_parse_table_3544(t_small_parse_table_array *v)
{
	v->a[70880] = anon_sym_esac;
	v->a[70881] = anon_sym_SEMI_SEMI;
	v->a[70882] = anon_sym_SEMI_AMP;
	v->a[70883] = anon_sym_SEMI_SEMI_AMP;
	v->a[70884] = anon_sym_PIPE_AMP;
	v->a[70885] = anon_sym_AMP_GT;
	v->a[70886] = anon_sym_AMP_GT_GT;
	v->a[70887] = anon_sym_LT_AMP;
	v->a[70888] = anon_sym_GT_AMP;
	v->a[70889] = anon_sym_GT_PIPE;
	v->a[70890] = anon_sym_LT_AMP_DASH;
	v->a[70891] = anon_sym_GT_AMP_DASH;
	v->a[70892] = anon_sym_LT_LT_DASH;
	v->a[70893] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70894] = anon_sym_DOLLAR_LBRACK;
	v->a[70895] = aux_sym_concatenation_token1;
	v->a[70896] = anon_sym_DOLLAR;
	v->a[70897] = sym__special_character;
	v->a[70898] = anon_sym_DQUOTE;
	v->a[70899] = sym_raw_string;
	small_parse_table_3545(v);
}

/* EOF small_parse_table_708.c */

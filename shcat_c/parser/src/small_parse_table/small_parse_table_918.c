/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_918.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4590(t_small_parse_table_array *v)
{
	v->a[91800] = sym_file_descriptor;
	v->a[91801] = actions(5831);
	v->a[91802] = 3;
	v->a[91803] = sym_variable_name;
	v->a[91804] = sym_test_operator;
	v->a[91805] = sym__brace_start;
	v->a[91806] = actions(5821);
	v->a[91807] = 11;
	v->a[91808] = anon_sym_SEMI;
	v->a[91809] = anon_sym_PIPE_PIPE;
	v->a[91810] = anon_sym_AMP_AMP;
	v->a[91811] = anon_sym_PIPE;
	v->a[91812] = anon_sym_AMP;
	v->a[91813] = anon_sym_LT_LT;
	v->a[91814] = anon_sym_SEMI_SEMI;
	v->a[91815] = anon_sym_SEMI_AMP;
	v->a[91816] = anon_sym_SEMI_SEMI_AMP;
	v->a[91817] = anon_sym_PIPE_AMP;
	v->a[91818] = anon_sym_LT_LT_DASH;
	v->a[91819] = actions(5823);
	small_parse_table_4591(v);
}

void	small_parse_table_4591(t_small_parse_table_array *v)
{
	v->a[91820] = 11;
	v->a[91821] = anon_sym_LT;
	v->a[91822] = anon_sym_GT;
	v->a[91823] = anon_sym_GT_GT;
	v->a[91824] = anon_sym_AMP_GT;
	v->a[91825] = anon_sym_AMP_GT_GT;
	v->a[91826] = anon_sym_LT_AMP;
	v->a[91827] = anon_sym_GT_AMP;
	v->a[91828] = anon_sym_GT_PIPE;
	v->a[91829] = anon_sym_LT_AMP_DASH;
	v->a[91830] = anon_sym_GT_AMP_DASH;
	v->a[91831] = anon_sym_LT_LT_LT;
	v->a[91832] = actions(5819);
	v->a[91833] = 17;
	v->a[91834] = anon_sym_LPAREN_LPAREN;
	v->a[91835] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91836] = anon_sym_DOLLAR_LBRACK;
	v->a[91837] = anon_sym_DOLLAR;
	v->a[91838] = sym__special_character;
	v->a[91839] = anon_sym_DQUOTE;
	small_parse_table_4592(v);
}

void	small_parse_table_4592(t_small_parse_table_array *v)
{
	v->a[91840] = sym_raw_string;
	v->a[91841] = sym_ansi_c_string;
	v->a[91842] = aux_sym_number_token1;
	v->a[91843] = aux_sym_number_token2;
	v->a[91844] = anon_sym_DOLLAR_LBRACE;
	v->a[91845] = anon_sym_DOLLAR_LPAREN;
	v->a[91846] = anon_sym_BQUOTE;
	v->a[91847] = anon_sym_DOLLAR_BQUOTE;
	v->a[91848] = anon_sym_LT_LPAREN;
	v->a[91849] = anon_sym_GT_LPAREN;
	v->a[91850] = sym_word;
	v->a[91851] = 6;
	v->a[91852] = actions(3);
	v->a[91853] = 1;
	v->a[91854] = sym_comment;
	v->a[91855] = actions(6013);
	v->a[91856] = 1;
	v->a[91857] = aux_sym_concatenation_token1;
	v->a[91858] = actions(6089);
	v->a[91859] = 1;
	small_parse_table_4593(v);
}

void	small_parse_table_4593(t_small_parse_table_array *v)
{
	v->a[91860] = sym__concat;
	v->a[91861] = state(1879);
	v->a[91862] = 1;
	v->a[91863] = aux_sym_concatenation_repeat1;
	v->a[91864] = actions(1267);
	v->a[91865] = 4;
	v->a[91866] = sym_file_descriptor;
	v->a[91867] = sym_test_operator;
	v->a[91868] = sym__brace_start;
	v->a[91869] = aux_sym_heredoc_redirect_token1;
	v->a[91870] = actions(1265);
	v->a[91871] = 37;
	v->a[91872] = anon_sym_LPAREN_LPAREN;
	v->a[91873] = anon_sym_SEMI;
	v->a[91874] = anon_sym_PIPE_PIPE;
	v->a[91875] = anon_sym_AMP_AMP;
	v->a[91876] = anon_sym_PIPE;
	v->a[91877] = anon_sym_AMP;
	v->a[91878] = anon_sym_LT;
	v->a[91879] = anon_sym_GT;
	small_parse_table_4594(v);
}

void	small_parse_table_4594(t_small_parse_table_array *v)
{
	v->a[91880] = anon_sym_LT_LT;
	v->a[91881] = anon_sym_GT_GT;
	v->a[91882] = anon_sym_RPAREN;
	v->a[91883] = anon_sym_SEMI_SEMI;
	v->a[91884] = anon_sym_PIPE_AMP;
	v->a[91885] = anon_sym_AMP_GT;
	v->a[91886] = anon_sym_AMP_GT_GT;
	v->a[91887] = anon_sym_LT_AMP;
	v->a[91888] = anon_sym_GT_AMP;
	v->a[91889] = anon_sym_GT_PIPE;
	v->a[91890] = anon_sym_LT_AMP_DASH;
	v->a[91891] = anon_sym_GT_AMP_DASH;
	v->a[91892] = anon_sym_LT_LT_DASH;
	v->a[91893] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91894] = anon_sym_DOLLAR_LBRACK;
	v->a[91895] = anon_sym_DOLLAR;
	v->a[91896] = sym__special_character;
	v->a[91897] = anon_sym_DQUOTE;
	v->a[91898] = sym_raw_string;
	v->a[91899] = sym_ansi_c_string;
	small_parse_table_4595(v);
}

/* EOF small_parse_table_918.c */

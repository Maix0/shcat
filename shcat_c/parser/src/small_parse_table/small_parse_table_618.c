/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_618.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3090(t_small_parse_table_array *v)
{
	v->a[61800] = anon_sym_GT_AMP;
	v->a[61801] = anon_sym_GT_PIPE;
	v->a[61802] = anon_sym_LT_AMP_DASH;
	v->a[61803] = anon_sym_GT_AMP_DASH;
	v->a[61804] = anon_sym_LT_LT_DASH;
	v->a[61805] = anon_sym_LT_LT_LT;
	v->a[61806] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61807] = anon_sym_DOLLAR_LBRACK;
	v->a[61808] = anon_sym_DOLLAR;
	v->a[61809] = sym__special_character;
	v->a[61810] = anon_sym_DQUOTE;
	v->a[61811] = sym_raw_string;
	v->a[61812] = sym_ansi_c_string;
	v->a[61813] = aux_sym_number_token1;
	v->a[61814] = aux_sym_number_token2;
	v->a[61815] = anon_sym_DOLLAR_LBRACE;
	v->a[61816] = anon_sym_DOLLAR_LPAREN;
	v->a[61817] = anon_sym_BQUOTE;
	v->a[61818] = anon_sym_DOLLAR_BQUOTE;
	v->a[61819] = anon_sym_LT_LPAREN;
	small_parse_table_3091(v);
}

void	small_parse_table_3091(t_small_parse_table_array *v)
{
	v->a[61820] = anon_sym_GT_LPAREN;
	v->a[61821] = sym_word;
	v->a[61822] = 5;
	v->a[61823] = actions(3);
	v->a[61824] = 1;
	v->a[61825] = sym_comment;
	v->a[61826] = actions(5681);
	v->a[61827] = 1;
	v->a[61828] = sym__special_character;
	v->a[61829] = state(1448);
	v->a[61830] = 1;
	v->a[61831] = aux_sym__literal_repeat1;
	v->a[61832] = actions(5180);
	v->a[61833] = 5;
	v->a[61834] = sym_file_descriptor;
	v->a[61835] = sym_variable_name;
	v->a[61836] = sym_test_operator;
	v->a[61837] = sym__brace_start;
	v->a[61838] = aux_sym_heredoc_redirect_token1;
	v->a[61839] = actions(5178);
	small_parse_table_3092(v);
}

void	small_parse_table_3092(t_small_parse_table_array *v)
{
	v->a[61840] = 39;
	v->a[61841] = anon_sym_LPAREN_LPAREN;
	v->a[61842] = anon_sym_SEMI;
	v->a[61843] = anon_sym_PIPE_PIPE;
	v->a[61844] = anon_sym_AMP_AMP;
	v->a[61845] = anon_sym_PIPE;
	v->a[61846] = anon_sym_AMP;
	v->a[61847] = anon_sym_LT;
	v->a[61848] = anon_sym_GT;
	v->a[61849] = anon_sym_LT_LT;
	v->a[61850] = anon_sym_GT_GT;
	v->a[61851] = anon_sym_esac;
	v->a[61852] = anon_sym_SEMI_SEMI;
	v->a[61853] = anon_sym_SEMI_AMP;
	v->a[61854] = anon_sym_SEMI_SEMI_AMP;
	v->a[61855] = anon_sym_PIPE_AMP;
	v->a[61856] = anon_sym_AMP_GT;
	v->a[61857] = anon_sym_AMP_GT_GT;
	v->a[61858] = anon_sym_LT_AMP;
	v->a[61859] = anon_sym_GT_AMP;
	small_parse_table_3093(v);
}

void	small_parse_table_3093(t_small_parse_table_array *v)
{
	v->a[61860] = anon_sym_GT_PIPE;
	v->a[61861] = anon_sym_LT_AMP_DASH;
	v->a[61862] = anon_sym_GT_AMP_DASH;
	v->a[61863] = anon_sym_LT_LT_DASH;
	v->a[61864] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61865] = anon_sym_DOLLAR_LBRACK;
	v->a[61866] = anon_sym_DOLLAR;
	v->a[61867] = anon_sym_DQUOTE;
	v->a[61868] = sym_raw_string;
	v->a[61869] = sym_ansi_c_string;
	v->a[61870] = aux_sym_number_token1;
	v->a[61871] = aux_sym_number_token2;
	v->a[61872] = anon_sym_DOLLAR_LBRACE;
	v->a[61873] = anon_sym_DOLLAR_LPAREN;
	v->a[61874] = anon_sym_BQUOTE;
	v->a[61875] = anon_sym_DOLLAR_BQUOTE;
	v->a[61876] = anon_sym_LT_LPAREN;
	v->a[61877] = anon_sym_GT_LPAREN;
	v->a[61878] = aux_sym__simple_variable_name_token1;
	v->a[61879] = sym_word;
	small_parse_table_3094(v);
}

void	small_parse_table_3094(t_small_parse_table_array *v)
{
	v->a[61880] = 6;
	v->a[61881] = actions(3);
	v->a[61882] = 1;
	v->a[61883] = sym_comment;
	v->a[61884] = actions(5644);
	v->a[61885] = 1;
	v->a[61886] = aux_sym_concatenation_token1;
	v->a[61887] = actions(5646);
	v->a[61888] = 1;
	v->a[61889] = sym__concat;
	v->a[61890] = state(1420);
	v->a[61891] = 1;
	v->a[61892] = aux_sym_concatenation_repeat1;
	v->a[61893] = actions(1263);
	v->a[61894] = 4;
	v->a[61895] = sym_file_descriptor;
	v->a[61896] = sym_test_operator;
	v->a[61897] = sym__brace_start;
	v->a[61898] = aux_sym_heredoc_redirect_token1;
	v->a[61899] = actions(1261);
	small_parse_table_3095(v);
}

/* EOF small_parse_table_618.c */

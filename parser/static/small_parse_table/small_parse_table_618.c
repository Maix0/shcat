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
	v->a[61800] = anon_sym_BQUOTE;
	v->a[61801] = anon_sym_DOLLAR_BQUOTE;
	v->a[61802] = sym_word;
	v->a[61803] = anon_sym_SEMI;
	v->a[61804] = 6;
	v->a[61805] = actions(3);
	v->a[61806] = 1;
	v->a[61807] = sym_comment;
	v->a[61808] = actions(4034);
	v->a[61809] = 1;
	v->a[61810] = sym_variable_name;
	v->a[61811] = actions(4032);
	v->a[61812] = 2;
	v->a[61813] = aux_sym__simple_variable_name_token1;
	v->a[61814] = aux_sym__multiline_variable_name_token1;
	v->a[61815] = actions(816);
	v->a[61816] = 3;
	v->a[61817] = sym_file_descriptor;
	v->a[61818] = sym_test_operator;
	v->a[61819] = sym__brace_start;
	small_parse_table_3091(v);
}

void	small_parse_table_3091(t_small_parse_table_array *v)
{
	v->a[61820] = actions(4030);
	v->a[61821] = 9;
	v->a[61822] = anon_sym_BANG;
	v->a[61823] = anon_sym_DASH;
	v->a[61824] = anon_sym_STAR;
	v->a[61825] = anon_sym_QMARK;
	v->a[61826] = anon_sym_DOLLAR;
	v->a[61827] = anon_sym_POUND;
	v->a[61828] = anon_sym_AT;
	v->a[61829] = anon_sym_0;
	v->a[61830] = anon_sym__;
	v->a[61831] = actions(810);
	v->a[61832] = 21;
	v->a[61833] = anon_sym_LT;
	v->a[61834] = anon_sym_GT;
	v->a[61835] = anon_sym_GT_GT;
	v->a[61836] = anon_sym_AMP_GT;
	v->a[61837] = anon_sym_AMP_GT_GT;
	v->a[61838] = anon_sym_LT_AMP;
	v->a[61839] = anon_sym_GT_AMP;
	small_parse_table_3092(v);
}

void	small_parse_table_3092(t_small_parse_table_array *v)
{
	v->a[61840] = anon_sym_GT_PIPE;
	v->a[61841] = anon_sym_LT_AMP_DASH;
	v->a[61842] = anon_sym_GT_AMP_DASH;
	v->a[61843] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61844] = sym__special_character;
	v->a[61845] = anon_sym_DQUOTE;
	v->a[61846] = sym_raw_string;
	v->a[61847] = aux_sym_number_token1;
	v->a[61848] = aux_sym_number_token2;
	v->a[61849] = anon_sym_DOLLAR_LBRACE;
	v->a[61850] = anon_sym_DOLLAR_LPAREN;
	v->a[61851] = anon_sym_BQUOTE;
	v->a[61852] = anon_sym_DOLLAR_BQUOTE;
	v->a[61853] = sym_word;
	v->a[61854] = 5;
	v->a[61855] = actions(57);
	v->a[61856] = 1;
	v->a[61857] = sym_comment;
	v->a[61858] = state(1332);
	v->a[61859] = 1;
	small_parse_table_3093(v);
}

void	small_parse_table_3093(t_small_parse_table_array *v)
{
	v->a[61860] = aux_sym_concatenation_repeat1;
	v->a[61861] = actions(4036);
	v->a[61862] = 2;
	v->a[61863] = sym__concat;
	v->a[61864] = aux_sym_concatenation_token1;
	v->a[61865] = actions(2652);
	v->a[61866] = 13;
	v->a[61867] = anon_sym_PIPE;
	v->a[61868] = anon_sym_LT;
	v->a[61869] = anon_sym_GT;
	v->a[61870] = anon_sym_AMP_GT;
	v->a[61871] = anon_sym_LT_AMP;
	v->a[61872] = anon_sym_GT_AMP;
	v->a[61873] = anon_sym_LT_LT;
	v->a[61874] = anon_sym_DOLLAR;
	v->a[61875] = aux_sym_number_token1;
	v->a[61876] = aux_sym_number_token2;
	v->a[61877] = anon_sym_DOLLAR_LPAREN;
	v->a[61878] = anon_sym_BQUOTE;
	v->a[61879] = sym_word;
	small_parse_table_3094(v);
}

void	small_parse_table_3094(t_small_parse_table_array *v)
{
	v->a[61880] = actions(2654);
	v->a[61881] = 20;
	v->a[61882] = sym_file_descriptor;
	v->a[61883] = sym_test_operator;
	v->a[61884] = sym__bare_dollar;
	v->a[61885] = sym__brace_start;
	v->a[61886] = anon_sym_LPAREN;
	v->a[61887] = anon_sym_PIPE_AMP;
	v->a[61888] = anon_sym_AMP_AMP;
	v->a[61889] = anon_sym_PIPE_PIPE;
	v->a[61890] = anon_sym_GT_GT;
	v->a[61891] = anon_sym_AMP_GT_GT;
	v->a[61892] = anon_sym_GT_PIPE;
	v->a[61893] = anon_sym_LT_AMP_DASH;
	v->a[61894] = anon_sym_GT_AMP_DASH;
	v->a[61895] = anon_sym_LT_LT_DASH;
	v->a[61896] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61897] = sym__special_character;
	v->a[61898] = anon_sym_DQUOTE;
	v->a[61899] = sym_raw_string;
	small_parse_table_3095(v);
}

/* EOF small_parse_table_618.c */

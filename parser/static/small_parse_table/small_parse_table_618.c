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
	v->a[61800] = anon_sym_LT_AMP;
	v->a[61801] = anon_sym_GT_AMP;
	v->a[61802] = anon_sym_GT_PIPE;
	v->a[61803] = anon_sym_LT_AMP_DASH;
	v->a[61804] = anon_sym_GT_AMP_DASH;
	v->a[61805] = anon_sym_LT_LT;
	v->a[61806] = anon_sym_LT_LT_DASH;
	v->a[61807] = anon_sym_AMP;
	v->a[61808] = anon_sym_BQUOTE;
	v->a[61809] = anon_sym_SEMI;
	v->a[61810] = 6;
	v->a[61811] = actions(3);
	v->a[61812] = 1;
	v->a[61813] = sym_comment;
	v->a[61814] = actions(2193);
	v->a[61815] = 1;
	v->a[61816] = aux_sym_concatenation_token1;
	v->a[61817] = actions(2196);
	v->a[61818] = 1;
	v->a[61819] = sym__concat;
	small_parse_table_3091(v);
}

void	small_parse_table_3091(t_small_parse_table_array *v)
{
	v->a[61820] = state(974);
	v->a[61821] = 1;
	v->a[61822] = aux_sym_concatenation_repeat1;
	v->a[61823] = actions(1112);
	v->a[61824] = 2;
	v->a[61825] = sym_file_descriptor;
	v->a[61826] = sym_variable_name;
	v->a[61827] = actions(1114);
	v->a[61828] = 20;
	v->a[61829] = anon_sym_LT;
	v->a[61830] = anon_sym_GT;
	v->a[61831] = anon_sym_GT_GT;
	v->a[61832] = anon_sym_AMP_GT;
	v->a[61833] = anon_sym_AMP_GT_GT;
	v->a[61834] = anon_sym_LT_AMP;
	v->a[61835] = anon_sym_GT_AMP;
	v->a[61836] = anon_sym_GT_PIPE;
	v->a[61837] = anon_sym_LT_AMP_DASH;
	v->a[61838] = anon_sym_GT_AMP_DASH;
	v->a[61839] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3092(v);
}

void	small_parse_table_3092(t_small_parse_table_array *v)
{
	v->a[61840] = anon_sym_DOLLAR;
	v->a[61841] = anon_sym_DQUOTE;
	v->a[61842] = sym_raw_string;
	v->a[61843] = aux_sym_number_token1;
	v->a[61844] = aux_sym_number_token2;
	v->a[61845] = anon_sym_DOLLAR_LBRACE;
	v->a[61846] = anon_sym_DOLLAR_LPAREN;
	v->a[61847] = anon_sym_BQUOTE;
	v->a[61848] = sym_word;
	v->a[61849] = 6;
	v->a[61850] = actions(3);
	v->a[61851] = 1;
	v->a[61852] = sym_comment;
	v->a[61853] = actions(2199);
	v->a[61854] = 1;
	v->a[61855] = aux_sym_concatenation_token1;
	v->a[61856] = actions(2201);
	v->a[61857] = 1;
	v->a[61858] = sym__concat;
	v->a[61859] = state(980);
	small_parse_table_3093(v);
}

void	small_parse_table_3093(t_small_parse_table_array *v)
{
	v->a[61860] = 1;
	v->a[61861] = aux_sym_concatenation_repeat1;
	v->a[61862] = actions(1202);
	v->a[61863] = 4;
	v->a[61864] = sym_file_descriptor;
	v->a[61865] = sym_variable_name;
	v->a[61866] = ts_builtin_sym_end;
	v->a[61867] = aux_sym_heredoc_redirect_token1;
	v->a[61868] = actions(1198);
	v->a[61869] = 18;
	v->a[61870] = anon_sym_PIPE;
	v->a[61871] = anon_sym_SEMI_SEMI;
	v->a[61872] = anon_sym_AMP_AMP;
	v->a[61873] = anon_sym_PIPE_PIPE;
	v->a[61874] = anon_sym_LT;
	v->a[61875] = anon_sym_GT;
	v->a[61876] = anon_sym_GT_GT;
	v->a[61877] = anon_sym_AMP_GT;
	v->a[61878] = anon_sym_AMP_GT_GT;
	v->a[61879] = anon_sym_LT_AMP;
	small_parse_table_3094(v);
}

void	small_parse_table_3094(t_small_parse_table_array *v)
{
	v->a[61880] = anon_sym_GT_AMP;
	v->a[61881] = anon_sym_GT_PIPE;
	v->a[61882] = anon_sym_LT_AMP_DASH;
	v->a[61883] = anon_sym_GT_AMP_DASH;
	v->a[61884] = anon_sym_LT_LT;
	v->a[61885] = anon_sym_LT_LT_DASH;
	v->a[61886] = anon_sym_AMP;
	v->a[61887] = anon_sym_SEMI;
	v->a[61888] = 3;
	v->a[61889] = actions(3);
	v->a[61890] = 1;
	v->a[61891] = sym_comment;
	v->a[61892] = actions(1319);
	v->a[61893] = 4;
	v->a[61894] = sym_file_descriptor;
	v->a[61895] = sym__concat;
	v->a[61896] = ts_builtin_sym_end;
	v->a[61897] = aux_sym_heredoc_redirect_token1;
	v->a[61898] = actions(1317);
	v->a[61899] = 21;
	small_parse_table_3095(v);
}

/* EOF small_parse_table_618.c */

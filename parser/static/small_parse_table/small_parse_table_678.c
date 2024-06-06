/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_678.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3390(t_small_parse_table_array *v)
{
	v->a[67800] = anon_sym_PIPE_AMP;
	v->a[67801] = anon_sym_AMP_AMP;
	v->a[67802] = anon_sym_PIPE_PIPE;
	v->a[67803] = anon_sym_GT_GT;
	v->a[67804] = anon_sym_AMP_GT_GT;
	v->a[67805] = anon_sym_GT_PIPE;
	v->a[67806] = anon_sym_LT_AMP_DASH;
	v->a[67807] = anon_sym_GT_AMP_DASH;
	v->a[67808] = anon_sym_LT_LT_DASH;
	v->a[67809] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67810] = aux_sym_concatenation_token1;
	v->a[67811] = sym__special_character;
	v->a[67812] = anon_sym_DQUOTE;
	v->a[67813] = sym_raw_string;
	v->a[67814] = anon_sym_DOLLAR_LBRACE;
	v->a[67815] = anon_sym_DOLLAR_BQUOTE;
	v->a[67816] = 5;
	v->a[67817] = actions(57);
	v->a[67818] = 1;
	v->a[67819] = sym_comment;
	small_parse_table_3391(v);
}

void	small_parse_table_3391(t_small_parse_table_array *v)
{
	v->a[67820] = state(1434);
	v->a[67821] = 1;
	v->a[67822] = aux_sym_concatenation_repeat1;
	v->a[67823] = actions(4223);
	v->a[67824] = 2;
	v->a[67825] = sym__concat;
	v->a[67826] = aux_sym_concatenation_token1;
	v->a[67827] = actions(2662);
	v->a[67828] = 13;
	v->a[67829] = anon_sym_PIPE;
	v->a[67830] = anon_sym_LT;
	v->a[67831] = anon_sym_GT;
	v->a[67832] = anon_sym_AMP_GT;
	v->a[67833] = anon_sym_LT_AMP;
	v->a[67834] = anon_sym_GT_AMP;
	v->a[67835] = anon_sym_LT_LT;
	v->a[67836] = anon_sym_DOLLAR;
	v->a[67837] = aux_sym_number_token1;
	v->a[67838] = aux_sym_number_token2;
	v->a[67839] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3392(v);
}

void	small_parse_table_3392(t_small_parse_table_array *v)
{
	v->a[67840] = anon_sym_BQUOTE;
	v->a[67841] = sym_word;
	v->a[67842] = actions(2664);
	v->a[67843] = 19;
	v->a[67844] = sym_file_descriptor;
	v->a[67845] = sym_variable_name;
	v->a[67846] = sym_test_operator;
	v->a[67847] = sym__brace_start;
	v->a[67848] = anon_sym_PIPE_AMP;
	v->a[67849] = anon_sym_AMP_AMP;
	v->a[67850] = anon_sym_PIPE_PIPE;
	v->a[67851] = anon_sym_GT_GT;
	v->a[67852] = anon_sym_AMP_GT_GT;
	v->a[67853] = anon_sym_GT_PIPE;
	v->a[67854] = anon_sym_LT_AMP_DASH;
	v->a[67855] = anon_sym_GT_AMP_DASH;
	v->a[67856] = anon_sym_LT_LT_DASH;
	v->a[67857] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67858] = sym__special_character;
	v->a[67859] = anon_sym_DQUOTE;
	small_parse_table_3393(v);
}

void	small_parse_table_3393(t_small_parse_table_array *v)
{
	v->a[67860] = sym_raw_string;
	v->a[67861] = anon_sym_DOLLAR_LBRACE;
	v->a[67862] = anon_sym_DOLLAR_BQUOTE;
	v->a[67863] = 19;
	v->a[67864] = actions(57);
	v->a[67865] = 1;
	v->a[67866] = sym_comment;
	v->a[67867] = actions(4120);
	v->a[67868] = 1;
	v->a[67869] = anon_sym_PIPE;
	v->a[67870] = actions(4122);
	v->a[67871] = 1;
	v->a[67872] = anon_sym_AMP_AMP;
	v->a[67873] = actions(4124);
	v->a[67874] = 1;
	v->a[67875] = anon_sym_PIPE_PIPE;
	v->a[67876] = actions(4126);
	v->a[67877] = 1;
	v->a[67878] = anon_sym_EQ;
	v->a[67879] = actions(4132);
	small_parse_table_3394(v);
}

void	small_parse_table_3394(t_small_parse_table_array *v)
{
	v->a[67880] = 1;
	v->a[67881] = anon_sym_COMMA;
	v->a[67882] = actions(4138);
	v->a[67883] = 1;
	v->a[67884] = anon_sym_CARET;
	v->a[67885] = actions(4140);
	v->a[67886] = 1;
	v->a[67887] = anon_sym_AMP;
	v->a[67888] = actions(4150);
	v->a[67889] = 1;
	v->a[67890] = anon_sym_QMARK;
	v->a[67891] = actions(4250);
	v->a[67892] = 1;
	v->a[67893] = anon_sym_RPAREN_RPAREN;
	v->a[67894] = state(3517);
	v->a[67895] = 1;
	v->a[67896] = aux_sym_arithmetic_expansion_repeat1;
	v->a[67897] = actions(4128);
	v->a[67898] = 2;
	v->a[67899] = anon_sym_LT;
	small_parse_table_3395(v);
}

/* EOF small_parse_table_678.c */

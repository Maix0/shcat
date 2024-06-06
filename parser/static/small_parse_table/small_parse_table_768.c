/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_768.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3840(t_small_parse_table_array *v)
{
	v->a[76800] = anon_sym_RPAREN;
	v->a[76801] = anon_sym_AMP_AMP;
	v->a[76802] = anon_sym_PIPE_PIPE;
	v->a[76803] = anon_sym_PLUS_EQ;
	v->a[76804] = anon_sym_DASH_EQ;
	v->a[76805] = anon_sym_STAR_EQ;
	v->a[76806] = anon_sym_SLASH_EQ;
	v->a[76807] = anon_sym_PERCENT_EQ;
	v->a[76808] = anon_sym_LT_LT_EQ;
	v->a[76809] = anon_sym_GT_GT_EQ;
	v->a[76810] = anon_sym_AMP_EQ;
	v->a[76811] = anon_sym_CARET_EQ;
	v->a[76812] = anon_sym_PIPE_EQ;
	v->a[76813] = anon_sym_EQ_EQ;
	v->a[76814] = anon_sym_BANG_EQ;
	v->a[76815] = anon_sym_LT_EQ;
	v->a[76816] = anon_sym_GT_EQ;
	v->a[76817] = anon_sym_QMARK;
	v->a[76818] = anon_sym_PLUS_PLUS2;
	v->a[76819] = anon_sym_DASH_DASH2;
	small_parse_table_3841(v);
}

void	small_parse_table_3841(t_small_parse_table_array *v)
{
	v->a[76820] = 3;
	v->a[76821] = actions(57);
	v->a[76822] = 1;
	v->a[76823] = sym_comment;
	v->a[76824] = actions(3115);
	v->a[76825] = 13;
	v->a[76826] = anon_sym_PIPE;
	v->a[76827] = anon_sym_EQ;
	v->a[76828] = anon_sym_LT;
	v->a[76829] = anon_sym_GT;
	v->a[76830] = anon_sym_GT_GT;
	v->a[76831] = anon_sym_LT_LT;
	v->a[76832] = anon_sym_CARET;
	v->a[76833] = anon_sym_AMP;
	v->a[76834] = anon_sym_PLUS;
	v->a[76835] = anon_sym_DASH;
	v->a[76836] = anon_sym_STAR;
	v->a[76837] = anon_sym_SLASH;
	v->a[76838] = anon_sym_PERCENT;
	v->a[76839] = actions(3117);
	small_parse_table_3842(v);
}

void	small_parse_table_3842(t_small_parse_table_array *v)
{
	v->a[76840] = 20;
	v->a[76841] = anon_sym_RPAREN;
	v->a[76842] = anon_sym_AMP_AMP;
	v->a[76843] = anon_sym_PIPE_PIPE;
	v->a[76844] = anon_sym_PLUS_EQ;
	v->a[76845] = anon_sym_DASH_EQ;
	v->a[76846] = anon_sym_STAR_EQ;
	v->a[76847] = anon_sym_SLASH_EQ;
	v->a[76848] = anon_sym_PERCENT_EQ;
	v->a[76849] = anon_sym_LT_LT_EQ;
	v->a[76850] = anon_sym_GT_GT_EQ;
	v->a[76851] = anon_sym_AMP_EQ;
	v->a[76852] = anon_sym_CARET_EQ;
	v->a[76853] = anon_sym_PIPE_EQ;
	v->a[76854] = anon_sym_EQ_EQ;
	v->a[76855] = anon_sym_BANG_EQ;
	v->a[76856] = anon_sym_LT_EQ;
	v->a[76857] = anon_sym_GT_EQ;
	v->a[76858] = anon_sym_QMARK;
	v->a[76859] = anon_sym_PLUS_PLUS2;
	small_parse_table_3843(v);
}

void	small_parse_table_3843(t_small_parse_table_array *v)
{
	v->a[76860] = anon_sym_DASH_DASH2;
	v->a[76861] = 5;
	v->a[76862] = actions(57);
	v->a[76863] = 1;
	v->a[76864] = sym_comment;
	v->a[76865] = actions(4502);
	v->a[76866] = 1;
	v->a[76867] = sym__special_character;
	v->a[76868] = state(1614);
	v->a[76869] = 1;
	v->a[76870] = aux_sym__literal_repeat1;
	v->a[76871] = actions(3195);
	v->a[76872] = 12;
	v->a[76873] = anon_sym_PIPE;
	v->a[76874] = anon_sym_LT;
	v->a[76875] = anon_sym_GT;
	v->a[76876] = anon_sym_AMP_GT;
	v->a[76877] = anon_sym_LT_AMP;
	v->a[76878] = anon_sym_GT_AMP;
	v->a[76879] = anon_sym_LT_LT;
	small_parse_table_3844(v);
}

void	small_parse_table_3844(t_small_parse_table_array *v)
{
	v->a[76880] = anon_sym_DOLLAR;
	v->a[76881] = aux_sym_number_token1;
	v->a[76882] = aux_sym_number_token2;
	v->a[76883] = anon_sym_DOLLAR_LPAREN;
	v->a[76884] = sym_word;
	v->a[76885] = actions(3197);
	v->a[76886] = 19;
	v->a[76887] = sym_file_descriptor;
	v->a[76888] = sym_variable_name;
	v->a[76889] = sym_test_operator;
	v->a[76890] = sym__brace_start;
	v->a[76891] = anon_sym_PIPE_AMP;
	v->a[76892] = anon_sym_AMP_AMP;
	v->a[76893] = anon_sym_PIPE_PIPE;
	v->a[76894] = anon_sym_GT_GT;
	v->a[76895] = anon_sym_AMP_GT_GT;
	v->a[76896] = anon_sym_GT_PIPE;
	v->a[76897] = anon_sym_LT_AMP_DASH;
	v->a[76898] = anon_sym_GT_AMP_DASH;
	v->a[76899] = anon_sym_LT_LT_DASH;
	small_parse_table_3845(v);
}

/* EOF small_parse_table_768.c */

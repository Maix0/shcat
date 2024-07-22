/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_718.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3590(t_small_parse_table_array *v)
{
	v->a[71800] = 1;
	v->a[71801] = sym_raw_string;
	v->a[71802] = actions(2890);
	v->a[71803] = 1;
	v->a[71804] = sym_variable_name;
	v->a[71805] = actions(2892);
	v->a[71806] = 1;
	v->a[71807] = sym__expansion_word;
	v->a[71808] = state(1875);
	v->a[71809] = 1;
	v->a[71810] = sym__word_no_brace;
	v->a[71811] = state(1883);
	v->a[71812] = 4;
	v->a[71813] = sym_string;
	v->a[71814] = sym_simple_expansion;
	v->a[71815] = sym_expansion;
	v->a[71816] = sym_command_substitution;
	v->a[71817] = 7;
	v->a[71818] = actions(3);
	v->a[71819] = 1;
	small_parse_table_3591(v);
}

void	small_parse_table_3591(t_small_parse_table_array *v)
{
	v->a[71820] = sym_comment;
	v->a[71821] = actions(1024);
	v->a[71822] = 1;
	v->a[71823] = sym_file_descriptor;
	v->a[71824] = actions(2894);
	v->a[71825] = 1;
	v->a[71826] = aux_sym_heredoc_redirect_token1;
	v->a[71827] = state(1940);
	v->a[71828] = 1;
	v->a[71829] = sym__heredoc_expression;
	v->a[71830] = actions(1006);
	v->a[71831] = 2;
	v->a[71832] = anon_sym_AMP_AMP;
	v->a[71833] = anon_sym_PIPE_PIPE;
	v->a[71834] = state(1552);
	v->a[71835] = 2;
	v->a[71836] = sym_file_redirect;
	v->a[71837] = aux_sym_redirected_statement_repeat2;
	v->a[71838] = actions(1008);
	v->a[71839] = 7;
	small_parse_table_3592(v);
}

void	small_parse_table_3592(t_small_parse_table_array *v)
{
	v->a[71840] = anon_sym_LT;
	v->a[71841] = anon_sym_GT;
	v->a[71842] = anon_sym_GT_GT;
	v->a[71843] = anon_sym_LT_AMP;
	v->a[71844] = anon_sym_GT_AMP;
	v->a[71845] = anon_sym_GT_PIPE;
	v->a[71846] = anon_sym_LT_GT;
	v->a[71847] = 3;
	v->a[71848] = actions(501);
	v->a[71849] = 1;
	v->a[71850] = sym_comment;
	v->a[71851] = actions(1202);
	v->a[71852] = 4;
	v->a[71853] = anon_sym_PIPE;
	v->a[71854] = anon_sym_LT;
	v->a[71855] = anon_sym_GT;
	v->a[71856] = anon_sym_LT_LT;
	v->a[71857] = actions(1200);
	v->a[71858] = 10;
	v->a[71859] = sym_file_descriptor;
	small_parse_table_3593(v);
}

void	small_parse_table_3593(t_small_parse_table_array *v)
{
	v->a[71860] = sym_variable_name;
	v->a[71861] = anon_sym_AMP_AMP;
	v->a[71862] = anon_sym_PIPE_PIPE;
	v->a[71863] = anon_sym_GT_GT;
	v->a[71864] = anon_sym_LT_AMP;
	v->a[71865] = anon_sym_GT_AMP;
	v->a[71866] = anon_sym_GT_PIPE;
	v->a[71867] = anon_sym_LT_GT;
	v->a[71868] = anon_sym_LT_LT_DASH;
	v->a[71869] = 3;
	v->a[71870] = actions(3);
	v->a[71871] = 1;
	v->a[71872] = sym_comment;
	v->a[71873] = actions(527);
	v->a[71874] = 1;
	v->a[71875] = sym__concat;
	v->a[71876] = actions(525);
	v->a[71877] = 13;
	v->a[71878] = anon_sym_SEMI_SEMI;
	v->a[71879] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3594(v);
}

void	small_parse_table_3594(t_small_parse_table_array *v)
{
	v->a[71880] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71881] = aux_sym_concatenation_token1;
	v->a[71882] = anon_sym_DOLLAR;
	v->a[71883] = anon_sym_DQUOTE;
	v->a[71884] = sym_raw_string;
	v->a[71885] = sym_number;
	v->a[71886] = anon_sym_DOLLAR_LBRACE;
	v->a[71887] = anon_sym_DOLLAR_LPAREN;
	v->a[71888] = anon_sym_BQUOTE;
	v->a[71889] = sym_word;
	v->a[71890] = anon_sym_SEMI;
	v->a[71891] = 7;
	v->a[71892] = actions(3);
	v->a[71893] = 1;
	v->a[71894] = sym_comment;
	v->a[71895] = actions(1024);
	v->a[71896] = 1;
	v->a[71897] = sym_file_descriptor;
	v->a[71898] = actions(2896);
	v->a[71899] = 1;
	small_parse_table_3595(v);
}

/* EOF small_parse_table_718.c */

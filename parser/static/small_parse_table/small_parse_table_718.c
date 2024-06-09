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
	v->a[71800] = anon_sym_DOLLAR;
	v->a[71801] = anon_sym_DQUOTE;
	v->a[71802] = sym_raw_string;
	v->a[71803] = aux_sym_number_token1;
	v->a[71804] = aux_sym_number_token2;
	v->a[71805] = anon_sym_DOLLAR_LBRACE;
	v->a[71806] = anon_sym_DOLLAR_LPAREN;
	v->a[71807] = anon_sym_BQUOTE;
	v->a[71808] = sym_word;
	v->a[71809] = 3;
	v->a[71810] = actions(3);
	v->a[71811] = 1;
	v->a[71812] = sym_comment;
	v->a[71813] = actions(1202);
	v->a[71814] = 3;
	v->a[71815] = sym_file_descriptor;
	v->a[71816] = sym_variable_name;
	v->a[71817] = aux_sym_heredoc_redirect_token1;
	v->a[71818] = actions(1198);
	v->a[71819] = 19;
	small_parse_table_3591(v);
}

void	small_parse_table_3591(t_small_parse_table_array *v)
{
	v->a[71820] = anon_sym_esac;
	v->a[71821] = anon_sym_PIPE;
	v->a[71822] = anon_sym_SEMI_SEMI;
	v->a[71823] = anon_sym_AMP_AMP;
	v->a[71824] = anon_sym_PIPE_PIPE;
	v->a[71825] = anon_sym_LT;
	v->a[71826] = anon_sym_GT;
	v->a[71827] = anon_sym_GT_GT;
	v->a[71828] = anon_sym_AMP_GT;
	v->a[71829] = anon_sym_AMP_GT_GT;
	v->a[71830] = anon_sym_LT_AMP;
	v->a[71831] = anon_sym_GT_AMP;
	v->a[71832] = anon_sym_GT_PIPE;
	v->a[71833] = anon_sym_LT_AMP_DASH;
	v->a[71834] = anon_sym_GT_AMP_DASH;
	v->a[71835] = anon_sym_LT_LT;
	v->a[71836] = anon_sym_LT_LT_DASH;
	v->a[71837] = anon_sym_AMP;
	v->a[71838] = anon_sym_SEMI;
	v->a[71839] = 16;
	small_parse_table_3592(v);
}

void	small_parse_table_3592(t_small_parse_table_array *v)
{
	v->a[71840] = actions(3);
	v->a[71841] = 1;
	v->a[71842] = sym_comment;
	v->a[71843] = actions(2709);
	v->a[71844] = 1;
	v->a[71845] = anon_sym_LPAREN;
	v->a[71846] = actions(2712);
	v->a[71847] = 1;
	v->a[71848] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71849] = actions(2715);
	v->a[71850] = 1;
	v->a[71851] = anon_sym_DOLLAR;
	v->a[71852] = actions(2718);
	v->a[71853] = 1;
	v->a[71854] = anon_sym_DQUOTE;
	v->a[71855] = actions(2721);
	v->a[71856] = 1;
	v->a[71857] = aux_sym_number_token1;
	v->a[71858] = actions(2724);
	v->a[71859] = 1;
	small_parse_table_3593(v);
}

void	small_parse_table_3593(t_small_parse_table_array *v)
{
	v->a[71860] = aux_sym_number_token2;
	v->a[71861] = actions(2727);
	v->a[71862] = 1;
	v->a[71863] = anon_sym_DOLLAR_LBRACE;
	v->a[71864] = actions(2730);
	v->a[71865] = 1;
	v->a[71866] = anon_sym_DOLLAR_LPAREN;
	v->a[71867] = actions(2733);
	v->a[71868] = 1;
	v->a[71869] = anon_sym_BQUOTE;
	v->a[71870] = actions(2736);
	v->a[71871] = 1;
	v->a[71872] = sym_extglob_pattern;
	v->a[71873] = state(1241);
	v->a[71874] = 1;
	v->a[71875] = aux_sym_case_statement_repeat1;
	v->a[71876] = state(1786);
	v->a[71877] = 1;
	v->a[71878] = sym_case_item;
	v->a[71879] = actions(2706);
	small_parse_table_3594(v);
}

void	small_parse_table_3594(t_small_parse_table_array *v)
{
	v->a[71880] = 2;
	v->a[71881] = sym_raw_string;
	v->a[71882] = sym_word;
	v->a[71883] = state(2011);
	v->a[71884] = 2;
	v->a[71885] = sym_concatenation;
	v->a[71886] = sym__extglob_blob;
	v->a[71887] = state(1908);
	v->a[71888] = 6;
	v->a[71889] = sym_arithmetic_expansion;
	v->a[71890] = sym_string;
	v->a[71891] = sym_number;
	v->a[71892] = sym_simple_expansion;
	v->a[71893] = sym_expansion;
	v->a[71894] = sym_command_substitution;
	v->a[71895] = 3;
	v->a[71896] = actions(3);
	v->a[71897] = 1;
	v->a[71898] = sym_comment;
	v->a[71899] = actions(2610);
	small_parse_table_3595(v);
}

/* EOF small_parse_table_718.c */

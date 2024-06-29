/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_788.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3940(t_small_parse_table_array *v)
{
	v->a[78800] = actions(863);
	v->a[78801] = 1;
	v->a[78802] = anon_sym_DQUOTE;
	v->a[78803] = actions(865);
	v->a[78804] = 1;
	v->a[78805] = anon_sym_DOLLAR_LBRACE;
	v->a[78806] = actions(867);
	v->a[78807] = 1;
	v->a[78808] = anon_sym_DOLLAR_LPAREN;
	v->a[78809] = actions(869);
	v->a[78810] = 1;
	v->a[78811] = anon_sym_BQUOTE;
	v->a[78812] = actions(2855);
	v->a[78813] = 1;
	v->a[78814] = aux_sym_heredoc_redirect_token1;
	v->a[78815] = state(1577);
	v->a[78816] = 1;
	v->a[78817] = aux_sym__heredoc_command;
	v->a[78818] = state(1953);
	v->a[78819] = 1;
	small_parse_table_3941(v);
}

void	small_parse_table_3941(t_small_parse_table_array *v)
{
	v->a[78820] = sym_concatenation;
	v->a[78821] = actions(847);
	v->a[78822] = 3;
	v->a[78823] = sym_raw_string;
	v->a[78824] = sym_number;
	v->a[78825] = sym_word;
	v->a[78826] = state(1788);
	v->a[78827] = 5;
	v->a[78828] = sym_arithmetic_expansion;
	v->a[78829] = sym_string;
	v->a[78830] = sym_simple_expansion;
	v->a[78831] = sym_expansion;
	v->a[78832] = sym_command_substitution;
	v->a[78833] = 10;
	v->a[78834] = actions(3);
	v->a[78835] = 1;
	v->a[78836] = sym_comment;
	v->a[78837] = actions(879);
	v->a[78838] = 1;
	v->a[78839] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3942(v);
}

void	small_parse_table_3942(t_small_parse_table_array *v)
{
	v->a[78840] = actions(883);
	v->a[78841] = 1;
	v->a[78842] = anon_sym_DQUOTE;
	v->a[78843] = actions(885);
	v->a[78844] = 1;
	v->a[78845] = anon_sym_DOLLAR_LBRACE;
	v->a[78846] = actions(887);
	v->a[78847] = 1;
	v->a[78848] = anon_sym_DOLLAR_LPAREN;
	v->a[78849] = actions(889);
	v->a[78850] = 1;
	v->a[78851] = anon_sym_BQUOTE;
	v->a[78852] = actions(2859);
	v->a[78853] = 1;
	v->a[78854] = anon_sym_DOLLAR;
	v->a[78855] = actions(2861);
	v->a[78856] = 1;
	v->a[78857] = sym__bare_dollar;
	v->a[78858] = actions(2857);
	v->a[78859] = 5;
	small_parse_table_3943(v);
}

void	small_parse_table_3943(t_small_parse_table_array *v)
{
	v->a[78860] = aux_sym_concatenation_token1;
	v->a[78861] = sym_raw_string;
	v->a[78862] = sym_number;
	v->a[78863] = sym__comment_word;
	v->a[78864] = sym_word;
	v->a[78865] = state(1227);
	v->a[78866] = 5;
	v->a[78867] = sym_arithmetic_expansion;
	v->a[78868] = sym_string;
	v->a[78869] = sym_simple_expansion;
	v->a[78870] = sym_expansion;
	v->a[78871] = sym_command_substitution;
	v->a[78872] = 8;
	v->a[78873] = actions(3);
	v->a[78874] = 1;
	v->a[78875] = sym_comment;
	v->a[78876] = actions(871);
	v->a[78877] = 1;
	v->a[78878] = sym_file_descriptor;
	v->a[78879] = actions(2863);
	small_parse_table_3944(v);
}

void	small_parse_table_3944(t_small_parse_table_array *v)
{
	v->a[78880] = 1;
	v->a[78881] = aux_sym_heredoc_redirect_token1;
	v->a[78882] = state(2166);
	v->a[78883] = 1;
	v->a[78884] = sym__heredoc_expression;
	v->a[78885] = actions(851);
	v->a[78886] = 2;
	v->a[78887] = anon_sym_AMP_AMP;
	v->a[78888] = anon_sym_PIPE_PIPE;
	v->a[78889] = actions(855);
	v->a[78890] = 2;
	v->a[78891] = anon_sym_LT_AMP_DASH;
	v->a[78892] = anon_sym_GT_AMP_DASH;
	v->a[78893] = state(1609);
	v->a[78894] = 2;
	v->a[78895] = sym_file_redirect;
	v->a[78896] = aux_sym_redirected_statement_repeat2;
	v->a[78897] = actions(853);
	v->a[78898] = 8;
	v->a[78899] = anon_sym_LT;
	small_parse_table_3945(v);
}

/* EOF small_parse_table_788.c */

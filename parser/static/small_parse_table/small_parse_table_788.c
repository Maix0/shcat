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
	v->a[78800] = anon_sym_GT;
	v->a[78801] = anon_sym_GT_GT;
	v->a[78802] = anon_sym_AMP_GT;
	v->a[78803] = anon_sym_AMP_GT_GT;
	v->a[78804] = anon_sym_LT_AMP;
	v->a[78805] = anon_sym_GT_AMP;
	v->a[78806] = anon_sym_GT_PIPE;
	v->a[78807] = anon_sym_LT_AMP_DASH;
	v->a[78808] = anon_sym_GT_AMP_DASH;
	v->a[78809] = anon_sym_LT_LT;
	v->a[78810] = anon_sym_LT_LT_DASH;
	v->a[78811] = anon_sym_AMP;
	v->a[78812] = anon_sym_SEMI;
	v->a[78813] = 3;
	v->a[78814] = actions(3);
	v->a[78815] = 1;
	v->a[78816] = sym_comment;
	v->a[78817] = actions(2714);
	v->a[78818] = 2;
	v->a[78819] = sym_file_descriptor;
	small_parse_table_3941(v);
}

void	small_parse_table_3941(t_small_parse_table_array *v)
{
	v->a[78820] = aux_sym_heredoc_redirect_token1;
	v->a[78821] = actions(2716);
	v->a[78822] = 19;
	v->a[78823] = anon_sym_esac;
	v->a[78824] = anon_sym_PIPE;
	v->a[78825] = anon_sym_SEMI_SEMI;
	v->a[78826] = anon_sym_AMP_AMP;
	v->a[78827] = anon_sym_PIPE_PIPE;
	v->a[78828] = anon_sym_LT;
	v->a[78829] = anon_sym_GT;
	v->a[78830] = anon_sym_GT_GT;
	v->a[78831] = anon_sym_AMP_GT;
	v->a[78832] = anon_sym_AMP_GT_GT;
	v->a[78833] = anon_sym_LT_AMP;
	v->a[78834] = anon_sym_GT_AMP;
	v->a[78835] = anon_sym_GT_PIPE;
	v->a[78836] = anon_sym_LT_AMP_DASH;
	v->a[78837] = anon_sym_GT_AMP_DASH;
	v->a[78838] = anon_sym_LT_LT;
	v->a[78839] = anon_sym_LT_LT_DASH;
	small_parse_table_3942(v);
}

void	small_parse_table_3942(t_small_parse_table_array *v)
{
	v->a[78840] = anon_sym_AMP;
	v->a[78841] = anon_sym_SEMI;
	v->a[78842] = 15;
	v->a[78843] = actions(3);
	v->a[78844] = 1;
	v->a[78845] = sym_comment;
	v->a[78846] = actions(1959);
	v->a[78847] = 1;
	v->a[78848] = anon_sym_LPAREN;
	v->a[78849] = actions(1963);
	v->a[78850] = 1;
	v->a[78851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78852] = actions(1965);
	v->a[78853] = 1;
	v->a[78854] = anon_sym_DOLLAR;
	v->a[78855] = actions(1967);
	v->a[78856] = 1;
	v->a[78857] = anon_sym_DQUOTE;
	v->a[78858] = actions(1969);
	v->a[78859] = 1;
	small_parse_table_3943(v);
}

void	small_parse_table_3943(t_small_parse_table_array *v)
{
	v->a[78860] = anon_sym_DOLLAR_LBRACE;
	v->a[78861] = actions(1971);
	v->a[78862] = 1;
	v->a[78863] = anon_sym_DOLLAR_LPAREN;
	v->a[78864] = actions(1973);
	v->a[78865] = 1;
	v->a[78866] = anon_sym_BQUOTE;
	v->a[78867] = actions(1975);
	v->a[78868] = 1;
	v->a[78869] = sym_extglob_pattern;
	v->a[78870] = state(1547);
	v->a[78871] = 1;
	v->a[78872] = aux_sym_case_statement_repeat1;
	v->a[78873] = state(2080);
	v->a[78874] = 1;
	v->a[78875] = sym_case_item;
	v->a[78876] = state(2401);
	v->a[78877] = 1;
	v->a[78878] = sym__case_item_last;
	v->a[78879] = state(2224);
	small_parse_table_3944(v);
}

void	small_parse_table_3944(t_small_parse_table_array *v)
{
	v->a[78880] = 2;
	v->a[78881] = sym_concatenation;
	v->a[78882] = sym__extglob_blob;
	v->a[78883] = actions(1955);
	v->a[78884] = 3;
	v->a[78885] = sym_raw_string;
	v->a[78886] = sym_number;
	v->a[78887] = sym_word;
	v->a[78888] = state(2157);
	v->a[78889] = 5;
	v->a[78890] = sym_arithmetic_expansion;
	v->a[78891] = sym_string;
	v->a[78892] = sym_simple_expansion;
	v->a[78893] = sym_expansion;
	v->a[78894] = sym_command_substitution;
	v->a[78895] = 3;
	v->a[78896] = actions(3);
	v->a[78897] = 1;
	v->a[78898] = sym_comment;
	v->a[78899] = actions(608);
	small_parse_table_3945(v);
}

/* EOF small_parse_table_788.c */

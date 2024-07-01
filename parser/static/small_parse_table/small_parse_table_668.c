/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_668.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3340(t_small_parse_table_array *v)
{
	v->a[66800] = anon_sym_SEMI;
	v->a[66801] = 5;
	v->a[66802] = actions(3);
	v->a[66803] = 1;
	v->a[66804] = sym_comment;
	v->a[66805] = actions(690);
	v->a[66806] = 1;
	v->a[66807] = sym_file_descriptor;
	v->a[66808] = actions(965);
	v->a[66809] = 1;
	v->a[66810] = sym_variable_name;
	v->a[66811] = state(1181);
	v->a[66812] = 2;
	v->a[66813] = sym_variable_assignment;
	v->a[66814] = aux_sym__variable_assignments_repeat1;
	v->a[66815] = actions(678);
	v->a[66816] = 17;
	v->a[66817] = anon_sym_LT;
	v->a[66818] = anon_sym_GT;
	v->a[66819] = anon_sym_GT_GT;
	small_parse_table_3341(v);
}

void	small_parse_table_3341(t_small_parse_table_array *v)
{
	v->a[66820] = anon_sym_LT_AMP;
	v->a[66821] = anon_sym_GT_AMP;
	v->a[66822] = anon_sym_GT_PIPE;
	v->a[66823] = anon_sym_LT_AMP_DASH;
	v->a[66824] = anon_sym_GT_AMP_DASH;
	v->a[66825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66826] = anon_sym_DOLLAR;
	v->a[66827] = anon_sym_DQUOTE;
	v->a[66828] = sym_raw_string;
	v->a[66829] = sym_number;
	v->a[66830] = anon_sym_DOLLAR_LBRACE;
	v->a[66831] = anon_sym_DOLLAR_LPAREN;
	v->a[66832] = anon_sym_BQUOTE;
	v->a[66833] = sym_word;
	v->a[66834] = 10;
	v->a[66835] = actions(3);
	v->a[66836] = 1;
	v->a[66837] = sym_comment;
	v->a[66838] = actions(2065);
	v->a[66839] = 1;
	small_parse_table_3342(v);
}

void	small_parse_table_3342(t_small_parse_table_array *v)
{
	v->a[66840] = sym_file_descriptor;
	v->a[66841] = actions(2210);
	v->a[66842] = 1;
	v->a[66843] = aux_sym_heredoc_redirect_token1;
	v->a[66844] = state(649);
	v->a[66845] = 1;
	v->a[66846] = sym_terminator;
	v->a[66847] = actions(754);
	v->a[66848] = 2;
	v->a[66849] = anon_sym_LT_LT;
	v->a[66850] = anon_sym_LT_LT_DASH;
	v->a[66851] = actions(924);
	v->a[66852] = 2;
	v->a[66853] = anon_sym_AMP_AMP;
	v->a[66854] = anon_sym_PIPE_PIPE;
	v->a[66855] = actions(2063);
	v->a[66856] = 2;
	v->a[66857] = anon_sym_LT_AMP_DASH;
	v->a[66858] = anon_sym_GT_AMP_DASH;
	v->a[66859] = actions(999);
	small_parse_table_3343(v);
}

void	small_parse_table_3343(t_small_parse_table_array *v)
{
	v->a[66860] = 3;
	v->a[66861] = anon_sym_SEMI_SEMI;
	v->a[66862] = anon_sym_AMP;
	v->a[66863] = anon_sym_SEMI;
	v->a[66864] = state(1268);
	v->a[66865] = 3;
	v->a[66866] = sym_file_redirect;
	v->a[66867] = sym_heredoc_redirect;
	v->a[66868] = aux_sym_redirected_statement_repeat1;
	v->a[66869] = actions(2061);
	v->a[66870] = 6;
	v->a[66871] = anon_sym_LT;
	v->a[66872] = anon_sym_GT;
	v->a[66873] = anon_sym_GT_GT;
	v->a[66874] = anon_sym_LT_AMP;
	v->a[66875] = anon_sym_GT_AMP;
	v->a[66876] = anon_sym_GT_PIPE;
	v->a[66877] = 3;
	v->a[66878] = actions(3);
	v->a[66879] = 1;
	small_parse_table_3344(v);
}

void	small_parse_table_3344(t_small_parse_table_array *v)
{
	v->a[66880] = sym_comment;
	v->a[66881] = actions(982);
	v->a[66882] = 3;
	v->a[66883] = sym_file_descriptor;
	v->a[66884] = sym__concat;
	v->a[66885] = aux_sym_heredoc_redirect_token1;
	v->a[66886] = actions(980);
	v->a[66887] = 18;
	v->a[66888] = anon_sym_esac;
	v->a[66889] = anon_sym_PIPE;
	v->a[66890] = anon_sym_SEMI_SEMI;
	v->a[66891] = anon_sym_AMP_AMP;
	v->a[66892] = anon_sym_PIPE_PIPE;
	v->a[66893] = anon_sym_LT;
	v->a[66894] = anon_sym_GT;
	v->a[66895] = anon_sym_GT_GT;
	v->a[66896] = anon_sym_LT_AMP;
	v->a[66897] = anon_sym_GT_AMP;
	v->a[66898] = anon_sym_GT_PIPE;
	v->a[66899] = anon_sym_LT_AMP_DASH;
	small_parse_table_3345(v);
}

/* EOF small_parse_table_668.c */

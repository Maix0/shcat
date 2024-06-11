/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_575.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2875(t_small_parse_table_array *v)
{
	v->a[57500] = anon_sym_AMP_GT;
	v->a[57501] = anon_sym_AMP_GT_GT;
	v->a[57502] = anon_sym_LT_AMP;
	v->a[57503] = anon_sym_GT_AMP;
	v->a[57504] = anon_sym_GT_PIPE;
	v->a[57505] = anon_sym_LT_AMP_DASH;
	v->a[57506] = anon_sym_GT_AMP_DASH;
	v->a[57507] = anon_sym_LT_LT;
	v->a[57508] = anon_sym_LT_LT_DASH;
	v->a[57509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57510] = anon_sym_DOLLAR;
	v->a[57511] = anon_sym_DQUOTE;
	v->a[57512] = sym_raw_string;
	v->a[57513] = sym_number;
	v->a[57514] = anon_sym_DOLLAR_LBRACE;
	v->a[57515] = anon_sym_DOLLAR_LPAREN;
	v->a[57516] = anon_sym_BQUOTE;
	v->a[57517] = sym_word;
	v->a[57518] = 6;
	v->a[57519] = actions(3);
	small_parse_table_2876(v);
}

void	small_parse_table_2876(t_small_parse_table_array *v)
{
	v->a[57520] = 1;
	v->a[57521] = sym_comment;
	v->a[57522] = actions(1782);
	v->a[57523] = 1;
	v->a[57524] = aux_sym_concatenation_token1;
	v->a[57525] = actions(1796);
	v->a[57526] = 1;
	v->a[57527] = sym__concat;
	v->a[57528] = state(940);
	v->a[57529] = 1;
	v->a[57530] = aux_sym_concatenation_repeat1;
	v->a[57531] = actions(1169);
	v->a[57532] = 2;
	v->a[57533] = sym_file_descriptor;
	v->a[57534] = sym__bare_dollar;
	v->a[57535] = actions(1167);
	v->a[57536] = 24;
	v->a[57537] = anon_sym_PIPE;
	v->a[57538] = anon_sym_AMP_AMP;
	v->a[57539] = anon_sym_PIPE_PIPE;
	small_parse_table_2877(v);
}

void	small_parse_table_2877(t_small_parse_table_array *v)
{
	v->a[57540] = anon_sym_LT;
	v->a[57541] = anon_sym_GT;
	v->a[57542] = anon_sym_GT_GT;
	v->a[57543] = anon_sym_AMP_GT;
	v->a[57544] = anon_sym_AMP_GT_GT;
	v->a[57545] = anon_sym_LT_AMP;
	v->a[57546] = anon_sym_GT_AMP;
	v->a[57547] = anon_sym_GT_PIPE;
	v->a[57548] = anon_sym_LT_AMP_DASH;
	v->a[57549] = anon_sym_GT_AMP_DASH;
	v->a[57550] = anon_sym_LT_LT;
	v->a[57551] = anon_sym_LT_LT_DASH;
	v->a[57552] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57553] = anon_sym_DOLLAR;
	v->a[57554] = anon_sym_DQUOTE;
	v->a[57555] = sym_raw_string;
	v->a[57556] = sym_number;
	v->a[57557] = anon_sym_DOLLAR_LBRACE;
	v->a[57558] = anon_sym_DOLLAR_LPAREN;
	v->a[57559] = anon_sym_BQUOTE;
	small_parse_table_2878(v);
}

void	small_parse_table_2878(t_small_parse_table_array *v)
{
	v->a[57560] = sym_word;
	v->a[57561] = 4;
	v->a[57562] = actions(3);
	v->a[57563] = 1;
	v->a[57564] = sym_comment;
	v->a[57565] = actions(1554);
	v->a[57566] = 1;
	v->a[57567] = anon_sym_BQUOTE;
	v->a[57568] = actions(1556);
	v->a[57569] = 2;
	v->a[57570] = sym_file_descriptor;
	v->a[57571] = sym_variable_name;
	v->a[57572] = actions(1552);
	v->a[57573] = 26;
	v->a[57574] = anon_sym_for;
	v->a[57575] = anon_sym_while;
	v->a[57576] = anon_sym_until;
	v->a[57577] = anon_sym_if;
	v->a[57578] = anon_sym_case;
	v->a[57579] = anon_sym_LPAREN;
	small_parse_table_2879(v);
}

void	small_parse_table_2879(t_small_parse_table_array *v)
{
	v->a[57580] = anon_sym_LBRACE;
	v->a[57581] = anon_sym_BANG;
	v->a[57582] = anon_sym_LT;
	v->a[57583] = anon_sym_GT;
	v->a[57584] = anon_sym_GT_GT;
	v->a[57585] = anon_sym_AMP_GT;
	v->a[57586] = anon_sym_AMP_GT_GT;
	v->a[57587] = anon_sym_LT_AMP;
	v->a[57588] = anon_sym_GT_AMP;
	v->a[57589] = anon_sym_GT_PIPE;
	v->a[57590] = anon_sym_LT_AMP_DASH;
	v->a[57591] = anon_sym_GT_AMP_DASH;
	v->a[57592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57593] = anon_sym_DOLLAR;
	v->a[57594] = anon_sym_DQUOTE;
	v->a[57595] = sym_raw_string;
	v->a[57596] = sym_number;
	v->a[57597] = anon_sym_DOLLAR_LBRACE;
	v->a[57598] = anon_sym_DOLLAR_LPAREN;
	v->a[57599] = sym_word;
	small_parse_table_2880(v);
}

/* EOF small_parse_table_575.c */

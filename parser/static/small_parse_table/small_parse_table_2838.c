/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2838.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14190(t_small_parse_table_array *v)
{
	v->a[283800] = anon_sym_LT_LPAREN;
	v->a[283801] = anon_sym_GT_LPAREN;
	v->a[283802] = 3;
	v->a[283803] = actions(71);
	v->a[283804] = 1;
	v->a[283805] = sym_comment;
	v->a[283806] = actions(12734);
	v->a[283807] = 6;
	v->a[283808] = anon_sym_LPAREN;
	v->a[283809] = anon_sym_DOLLAR;
	v->a[283810] = aux_sym_number_token1;
	v->a[283811] = aux_sym_number_token2;
	v->a[283812] = anon_sym_DOLLAR_LPAREN;
	v->a[283813] = sym_word;
	v->a[283814] = actions(12736);
	v->a[283815] = 15;
	v->a[283816] = sym_test_operator;
	v->a[283817] = sym_extglob_pattern;
	v->a[283818] = sym__brace_start;
	v->a[283819] = anon_sym_LPAREN_LPAREN;
	small_parse_table_14191(v);
}

void	small_parse_table_14191(t_small_parse_table_array *v)
{
	v->a[283820] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[283821] = anon_sym_DOLLAR_LBRACK;
	v->a[283822] = sym__special_character;
	v->a[283823] = anon_sym_DQUOTE;
	v->a[283824] = sym_raw_string;
	v->a[283825] = sym_ansi_c_string;
	v->a[283826] = anon_sym_DOLLAR_LBRACE;
	v->a[283827] = anon_sym_BQUOTE;
	v->a[283828] = anon_sym_DOLLAR_BQUOTE;
	v->a[283829] = anon_sym_LT_LPAREN;
	v->a[283830] = anon_sym_GT_LPAREN;
	v->a[283831] = 12;
	v->a[283832] = actions(71);
	v->a[283833] = 1;
	v->a[283834] = sym_comment;
	v->a[283835] = actions(4253);
	v->a[283836] = 1;
	v->a[283837] = anon_sym_PIPE;
	v->a[283838] = actions(4348);
	v->a[283839] = 1;
	small_parse_table_14192(v);
}

void	small_parse_table_14192(t_small_parse_table_array *v)
{
	v->a[283840] = anon_sym_PIPE_AMP;
	v->a[283841] = actions(5994);
	v->a[283842] = 1;
	v->a[283843] = anon_sym_LT_LT;
	v->a[283844] = actions(5996);
	v->a[283845] = 1;
	v->a[283846] = anon_sym_LT_LT_DASH;
	v->a[283847] = actions(7551);
	v->a[283848] = 1;
	v->a[283849] = anon_sym_RBRACK;
	v->a[283850] = actions(12686);
	v->a[283851] = 1;
	v->a[283852] = sym_file_descriptor;
	v->a[283853] = actions(5992);
	v->a[283854] = 2;
	v->a[283855] = anon_sym_PIPE_PIPE;
	v->a[283856] = anon_sym_AMP_AMP;
	v->a[283857] = actions(12502);
	v->a[283858] = 2;
	v->a[283859] = anon_sym_LT_AMP_DASH;
	small_parse_table_14193(v);
}

void	small_parse_table_14193(t_small_parse_table_array *v)
{
	v->a[283860] = anon_sym_GT_AMP_DASH;
	v->a[283861] = actions(12500);
	v->a[283862] = 3;
	v->a[283863] = anon_sym_GT_GT;
	v->a[283864] = anon_sym_AMP_GT_GT;
	v->a[283865] = anon_sym_GT_PIPE;
	v->a[283866] = state(5350);
	v->a[283867] = 3;
	v->a[283868] = sym_file_redirect;
	v->a[283869] = sym_heredoc_redirect;
	v->a[283870] = aux_sym_redirected_statement_repeat1;
	v->a[283871] = actions(12498);
	v->a[283872] = 5;
	v->a[283873] = anon_sym_LT;
	v->a[283874] = anon_sym_GT;
	v->a[283875] = anon_sym_AMP_GT;
	v->a[283876] = anon_sym_LT_AMP;
	v->a[283877] = anon_sym_GT_AMP;
	v->a[283878] = 5;
	v->a[283879] = actions(71);
	small_parse_table_14194(v);
}

void	small_parse_table_14194(t_small_parse_table_array *v)
{
	v->a[283880] = 1;
	v->a[283881] = sym_comment;
	v->a[283882] = actions(12668);
	v->a[283883] = 1;
	v->a[283884] = sym__special_character;
	v->a[283885] = state(5388);
	v->a[283886] = 1;
	v->a[283887] = aux_sym__literal_repeat1;
	v->a[283888] = actions(5695);
	v->a[283889] = 7;
	v->a[283890] = anon_sym_PIPE;
	v->a[283891] = anon_sym_LT;
	v->a[283892] = anon_sym_GT;
	v->a[283893] = anon_sym_LT_LT;
	v->a[283894] = anon_sym_AMP_GT;
	v->a[283895] = anon_sym_LT_AMP;
	v->a[283896] = anon_sym_GT_AMP;
	v->a[283897] = actions(5697);
	v->a[283898] = 12;
	v->a[283899] = sym_file_descriptor;
	small_parse_table_14195(v);
}

/* EOF small_parse_table_2838.c */

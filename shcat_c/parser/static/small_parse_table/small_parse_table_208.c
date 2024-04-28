/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_208.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1040(t_small_parse_table_array *v)
{
	v->a[20800] = anon_sym_GT_AMP_DASH;
	v->a[20801] = anon_sym_LT_LT_DASH;
	v->a[20802] = 21;
	v->a[20803] = actions(3);
	v->a[20804] = 1;
	v->a[20805] = sym_comment;
	v->a[20806] = actions(3929);
	v->a[20807] = 1;
	v->a[20808] = anon_sym_DOLLAR_LBRACK;
	v->a[20809] = actions(3932);
	v->a[20810] = 1;
	v->a[20811] = anon_sym_DOLLAR;
	v->a[20812] = actions(3935);
	v->a[20813] = 1;
	v->a[20814] = sym__special_character;
	v->a[20815] = actions(3938);
	v->a[20816] = 1;
	v->a[20817] = anon_sym_DQUOTE;
	v->a[20818] = actions(3941);
	v->a[20819] = 1;
	small_parse_table_1041(v);
}

void	small_parse_table_1041(t_small_parse_table_array *v)
{
	v->a[20820] = aux_sym_number_token1;
	v->a[20821] = actions(3944);
	v->a[20822] = 1;
	v->a[20823] = aux_sym_number_token2;
	v->a[20824] = actions(3947);
	v->a[20825] = 1;
	v->a[20826] = anon_sym_DOLLAR_LBRACE;
	v->a[20827] = actions(3950);
	v->a[20828] = 1;
	v->a[20829] = anon_sym_DOLLAR_LPAREN;
	v->a[20830] = actions(3953);
	v->a[20831] = 1;
	v->a[20832] = anon_sym_BQUOTE;
	v->a[20833] = actions(3956);
	v->a[20834] = 1;
	v->a[20835] = anon_sym_DOLLAR_BQUOTE;
	v->a[20836] = actions(3962);
	v->a[20837] = 1;
	v->a[20838] = sym_test_operator;
	v->a[20839] = actions(3965);
	small_parse_table_1042(v);
}

void	small_parse_table_1042(t_small_parse_table_array *v)
{
	v->a[20840] = 1;
	v->a[20841] = sym__brace_start;
	v->a[20842] = state(2281);
	v->a[20843] = 1;
	v->a[20844] = aux_sym__literal_repeat1;
	v->a[20845] = actions(3926);
	v->a[20846] = 2;
	v->a[20847] = anon_sym_LPAREN_LPAREN;
	v->a[20848] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20849] = actions(3959);
	v->a[20850] = 2;
	v->a[20851] = anon_sym_LT_LPAREN;
	v->a[20852] = anon_sym_GT_LPAREN;
	v->a[20853] = state(747);
	v->a[20854] = 2;
	v->a[20855] = sym_concatenation;
	v->a[20856] = aux_sym_for_statement_repeat1;
	v->a[20857] = actions(2216);
	v->a[20858] = 3;
	v->a[20859] = sym_file_descriptor;
	small_parse_table_1043(v);
}

void	small_parse_table_1043(t_small_parse_table_array *v)
{
	v->a[20860] = ts_builtin_sym_end;
	v->a[20861] = aux_sym_heredoc_redirect_token1;
	v->a[20862] = actions(3923);
	v->a[20863] = 3;
	v->a[20864] = sym_raw_string;
	v->a[20865] = sym_ansi_c_string;
	v->a[20866] = sym_word;
	v->a[20867] = state(1846);
	v->a[20868] = 9;
	v->a[20869] = sym_arithmetic_expansion;
	v->a[20870] = sym_brace_expression;
	v->a[20871] = sym_string;
	v->a[20872] = sym_translated_string;
	v->a[20873] = sym_number;
	v->a[20874] = sym_simple_expansion;
	v->a[20875] = sym_expansion;
	v->a[20876] = sym_command_substitution;
	v->a[20877] = sym_process_substitution;
	v->a[20878] = actions(2214);
	v->a[20879] = 19;
	small_parse_table_1044(v);
}

void	small_parse_table_1044(t_small_parse_table_array *v)
{
	v->a[20880] = anon_sym_SEMI;
	v->a[20881] = anon_sym_PIPE_PIPE;
	v->a[20882] = anon_sym_AMP_AMP;
	v->a[20883] = anon_sym_PIPE;
	v->a[20884] = anon_sym_AMP;
	v->a[20885] = anon_sym_LT;
	v->a[20886] = anon_sym_GT;
	v->a[20887] = anon_sym_LT_LT;
	v->a[20888] = anon_sym_GT_GT;
	v->a[20889] = anon_sym_SEMI_SEMI;
	v->a[20890] = anon_sym_PIPE_AMP;
	v->a[20891] = anon_sym_AMP_GT;
	v->a[20892] = anon_sym_AMP_GT_GT;
	v->a[20893] = anon_sym_LT_AMP;
	v->a[20894] = anon_sym_GT_AMP;
	v->a[20895] = anon_sym_GT_PIPE;
	v->a[20896] = anon_sym_LT_AMP_DASH;
	v->a[20897] = anon_sym_GT_AMP_DASH;
	v->a[20898] = anon_sym_LT_LT_DASH;
	v->a[20899] = 24;
	small_parse_table_1045(v);
}

/* EOF small_parse_table_208.c */

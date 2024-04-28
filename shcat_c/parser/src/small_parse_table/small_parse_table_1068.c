/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1068.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5340(t_small_parse_table_array *v)
{
	v->a[106800] = sym__special_character;
	v->a[106801] = anon_sym_DQUOTE;
	v->a[106802] = sym_raw_string;
	v->a[106803] = sym_ansi_c_string;
	v->a[106804] = aux_sym_number_token1;
	v->a[106805] = aux_sym_number_token2;
	v->a[106806] = anon_sym_DOLLAR_LBRACE;
	v->a[106807] = anon_sym_DOLLAR_LPAREN;
	v->a[106808] = anon_sym_BQUOTE;
	v->a[106809] = anon_sym_DOLLAR_BQUOTE;
	v->a[106810] = anon_sym_LT_LPAREN;
	v->a[106811] = anon_sym_GT_LPAREN;
	v->a[106812] = sym_word;
	v->a[106813] = 8;
	v->a[106814] = actions(3);
	v->a[106815] = 1;
	v->a[106816] = sym_comment;
	v->a[106817] = actions(5826);
	v->a[106818] = 1;
	v->a[106819] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5341(v);
}

void	small_parse_table_5341(t_small_parse_table_array *v)
{
	v->a[106820] = actions(5828);
	v->a[106821] = 1;
	v->a[106822] = sym_file_descriptor;
	v->a[106823] = actions(6181);
	v->a[106824] = 1;
	v->a[106825] = anon_sym_RPAREN;
	v->a[106826] = actions(5831);
	v->a[106827] = 3;
	v->a[106828] = sym_variable_name;
	v->a[106829] = sym_test_operator;
	v->a[106830] = sym__brace_start;
	v->a[106831] = actions(5821);
	v->a[106832] = 9;
	v->a[106833] = anon_sym_SEMI;
	v->a[106834] = anon_sym_PIPE_PIPE;
	v->a[106835] = anon_sym_AMP_AMP;
	v->a[106836] = anon_sym_PIPE;
	v->a[106837] = anon_sym_AMP;
	v->a[106838] = anon_sym_LT_LT;
	v->a[106839] = anon_sym_SEMI_SEMI;
	small_parse_table_5342(v);
}

void	small_parse_table_5342(t_small_parse_table_array *v)
{
	v->a[106840] = anon_sym_PIPE_AMP;
	v->a[106841] = anon_sym_LT_LT_DASH;
	v->a[106842] = actions(5823);
	v->a[106843] = 11;
	v->a[106844] = anon_sym_LT;
	v->a[106845] = anon_sym_GT;
	v->a[106846] = anon_sym_GT_GT;
	v->a[106847] = anon_sym_AMP_GT;
	v->a[106848] = anon_sym_AMP_GT_GT;
	v->a[106849] = anon_sym_LT_AMP;
	v->a[106850] = anon_sym_GT_AMP;
	v->a[106851] = anon_sym_GT_PIPE;
	v->a[106852] = anon_sym_LT_AMP_DASH;
	v->a[106853] = anon_sym_GT_AMP_DASH;
	v->a[106854] = anon_sym_LT_LT_LT;
	v->a[106855] = actions(5819);
	v->a[106856] = 17;
	v->a[106857] = anon_sym_LPAREN_LPAREN;
	v->a[106858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106859] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_5343(v);
}

void	small_parse_table_5343(t_small_parse_table_array *v)
{
	v->a[106860] = anon_sym_DOLLAR;
	v->a[106861] = sym__special_character;
	v->a[106862] = anon_sym_DQUOTE;
	v->a[106863] = sym_raw_string;
	v->a[106864] = sym_ansi_c_string;
	v->a[106865] = aux_sym_number_token1;
	v->a[106866] = aux_sym_number_token2;
	v->a[106867] = anon_sym_DOLLAR_LBRACE;
	v->a[106868] = anon_sym_DOLLAR_LPAREN;
	v->a[106869] = anon_sym_BQUOTE;
	v->a[106870] = anon_sym_DOLLAR_BQUOTE;
	v->a[106871] = anon_sym_LT_LPAREN;
	v->a[106872] = anon_sym_GT_LPAREN;
	v->a[106873] = sym_word;
	v->a[106874] = 8;
	v->a[106875] = actions(3);
	v->a[106876] = 1;
	v->a[106877] = sym_comment;
	v->a[106878] = actions(5826);
	v->a[106879] = 1;
	small_parse_table_5344(v);
}

void	small_parse_table_5344(t_small_parse_table_array *v)
{
	v->a[106880] = aux_sym_heredoc_redirect_token1;
	v->a[106881] = actions(5828);
	v->a[106882] = 1;
	v->a[106883] = sym_file_descriptor;
	v->a[106884] = actions(6184);
	v->a[106885] = 1;
	v->a[106886] = anon_sym_RPAREN;
	v->a[106887] = actions(5831);
	v->a[106888] = 3;
	v->a[106889] = sym_variable_name;
	v->a[106890] = sym_test_operator;
	v->a[106891] = sym__brace_start;
	v->a[106892] = actions(5821);
	v->a[106893] = 9;
	v->a[106894] = anon_sym_SEMI;
	v->a[106895] = anon_sym_PIPE_PIPE;
	v->a[106896] = anon_sym_AMP_AMP;
	v->a[106897] = anon_sym_PIPE;
	v->a[106898] = anon_sym_AMP;
	v->a[106899] = anon_sym_LT_LT;
	small_parse_table_5345(v);
}

/* EOF small_parse_table_1068.c */

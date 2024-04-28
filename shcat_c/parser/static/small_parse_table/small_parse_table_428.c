/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_428.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2140(t_small_parse_table_array *v)
{
	v->a[42800] = sym_raw_string;
	v->a[42801] = sym_ansi_c_string;
	v->a[42802] = aux_sym_number_token1;
	v->a[42803] = aux_sym_number_token2;
	v->a[42804] = anon_sym_DOLLAR_LBRACE;
	v->a[42805] = anon_sym_DOLLAR_LPAREN;
	v->a[42806] = anon_sym_BQUOTE;
	v->a[42807] = anon_sym_DOLLAR_BQUOTE;
	v->a[42808] = anon_sym_LT_LPAREN;
	v->a[42809] = anon_sym_GT_LPAREN;
	v->a[42810] = sym_word;
	v->a[42811] = 8;
	v->a[42812] = actions(3);
	v->a[42813] = 1;
	v->a[42814] = sym_comment;
	v->a[42815] = actions(262);
	v->a[42816] = 1;
	v->a[42817] = anon_sym_DQUOTE;
	v->a[42818] = actions(1235);
	v->a[42819] = 1;
	small_parse_table_2141(v);
}

void	small_parse_table_2141(t_small_parse_table_array *v)
{
	v->a[42820] = sym_test_operator;
	v->a[42821] = actions(5162);
	v->a[42822] = 1;
	v->a[42823] = sym_variable_name;
	v->a[42824] = state(2734);
	v->a[42825] = 1;
	v->a[42826] = sym_string;
	v->a[42827] = actions(5160);
	v->a[42828] = 2;
	v->a[42829] = aux_sym__simple_variable_name_token1;
	v->a[42830] = aux_sym__multiline_variable_name_token1;
	v->a[42831] = actions(5158);
	v->a[42832] = 9;
	v->a[42833] = anon_sym_DASH;
	v->a[42834] = anon_sym_STAR;
	v->a[42835] = anon_sym_BANG;
	v->a[42836] = anon_sym_QMARK;
	v->a[42837] = anon_sym_DOLLAR;
	v->a[42838] = anon_sym_POUND;
	v->a[42839] = anon_sym_AT2;
	small_parse_table_2142(v);
}

void	small_parse_table_2142(t_small_parse_table_array *v)
{
	v->a[42840] = anon_sym_0;
	v->a[42841] = anon_sym__;
	v->a[42842] = actions(1227);
	v->a[42843] = 33;
	v->a[42844] = anon_sym_EQ;
	v->a[42845] = anon_sym_PLUS_PLUS;
	v->a[42846] = anon_sym_DASH_DASH;
	v->a[42847] = anon_sym_PLUS_EQ;
	v->a[42848] = anon_sym_DASH_EQ;
	v->a[42849] = anon_sym_STAR_EQ;
	v->a[42850] = anon_sym_SLASH_EQ;
	v->a[42851] = anon_sym_PERCENT_EQ;
	v->a[42852] = anon_sym_STAR_STAR_EQ;
	v->a[42853] = anon_sym_LT_LT_EQ;
	v->a[42854] = anon_sym_GT_GT_EQ;
	v->a[42855] = anon_sym_AMP_EQ;
	v->a[42856] = anon_sym_CARET_EQ;
	v->a[42857] = anon_sym_PIPE_EQ;
	v->a[42858] = anon_sym_PIPE_PIPE;
	v->a[42859] = anon_sym_AMP_AMP;
	small_parse_table_2143(v);
}

void	small_parse_table_2143(t_small_parse_table_array *v)
{
	v->a[42860] = anon_sym_PIPE;
	v->a[42861] = anon_sym_CARET;
	v->a[42862] = anon_sym_AMP;
	v->a[42863] = anon_sym_EQ_EQ;
	v->a[42864] = anon_sym_BANG_EQ;
	v->a[42865] = anon_sym_LT;
	v->a[42866] = anon_sym_GT;
	v->a[42867] = anon_sym_LT_EQ;
	v->a[42868] = anon_sym_GT_EQ;
	v->a[42869] = anon_sym_LT_LT;
	v->a[42870] = anon_sym_GT_GT;
	v->a[42871] = anon_sym_PLUS;
	v->a[42872] = anon_sym_SLASH;
	v->a[42873] = anon_sym_PERCENT;
	v->a[42874] = anon_sym_STAR_STAR;
	v->a[42875] = anon_sym_RPAREN;
	v->a[42876] = anon_sym_EQ_TILDE;
	v->a[42877] = 3;
	v->a[42878] = actions(3);
	v->a[42879] = 1;
	small_parse_table_2144(v);
}

void	small_parse_table_2144(t_small_parse_table_array *v)
{
	v->a[42880] = sym_comment;
	v->a[42881] = actions(1263);
	v->a[42882] = 5;
	v->a[42883] = sym_file_descriptor;
	v->a[42884] = sym_test_operator;
	v->a[42885] = sym__bare_dollar;
	v->a[42886] = sym__brace_start;
	v->a[42887] = aux_sym_heredoc_redirect_token1;
	v->a[42888] = actions(1261);
	v->a[42889] = 43;
	v->a[42890] = anon_sym_LPAREN_LPAREN;
	v->a[42891] = anon_sym_SEMI;
	v->a[42892] = anon_sym_PIPE_PIPE;
	v->a[42893] = anon_sym_AMP_AMP;
	v->a[42894] = anon_sym_PIPE;
	v->a[42895] = anon_sym_AMP;
	v->a[42896] = anon_sym_EQ_EQ;
	v->a[42897] = anon_sym_LT;
	v->a[42898] = anon_sym_GT;
	v->a[42899] = anon_sym_LT_LT;
	small_parse_table_2145(v);
}

/* EOF small_parse_table_428.c */

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
	v->a[42800] = actions(2886);
	v->a[42801] = 33;
	v->a[42802] = anon_sym_PIPE;
	v->a[42803] = anon_sym_SEMI_SEMI;
	v->a[42804] = anon_sym_PIPE_AMP;
	v->a[42805] = anon_sym_AMP_AMP;
	v->a[42806] = anon_sym_PIPE_PIPE;
	v->a[42807] = anon_sym_LT;
	v->a[42808] = anon_sym_GT;
	v->a[42809] = anon_sym_GT_GT;
	v->a[42810] = anon_sym_AMP_GT;
	v->a[42811] = anon_sym_AMP_GT_GT;
	v->a[42812] = anon_sym_LT_AMP;
	v->a[42813] = anon_sym_GT_AMP;
	v->a[42814] = anon_sym_GT_PIPE;
	v->a[42815] = anon_sym_LT_AMP_DASH;
	v->a[42816] = anon_sym_GT_AMP_DASH;
	v->a[42817] = anon_sym_LT_LT;
	v->a[42818] = anon_sym_LT_LT_DASH;
	v->a[42819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2141(v);
}

void	small_parse_table_2141(t_small_parse_table_array *v)
{
	v->a[42820] = anon_sym_AMP;
	v->a[42821] = aux_sym_concatenation_token1;
	v->a[42822] = anon_sym_DOLLAR;
	v->a[42823] = sym__special_character;
	v->a[42824] = anon_sym_DQUOTE;
	v->a[42825] = sym_raw_string;
	v->a[42826] = aux_sym_number_token1;
	v->a[42827] = aux_sym_number_token2;
	v->a[42828] = anon_sym_DOLLAR_LBRACE;
	v->a[42829] = anon_sym_DOLLAR_LPAREN;
	v->a[42830] = anon_sym_BQUOTE;
	v->a[42831] = anon_sym_DOLLAR_BQUOTE;
	v->a[42832] = aux_sym__simple_variable_name_token1;
	v->a[42833] = sym_word;
	v->a[42834] = anon_sym_SEMI;
	v->a[42835] = 3;
	v->a[42836] = actions(3);
	v->a[42837] = 1;
	v->a[42838] = sym_comment;
	v->a[42839] = actions(3117);
	small_parse_table_2142(v);
}

void	small_parse_table_2142(t_small_parse_table_array *v)
{
	v->a[42840] = 6;
	v->a[42841] = sym_file_descriptor;
	v->a[42842] = sym__concat;
	v->a[42843] = sym_variable_name;
	v->a[42844] = sym_test_operator;
	v->a[42845] = sym__brace_start;
	v->a[42846] = aux_sym_heredoc_redirect_token1;
	v->a[42847] = actions(3115);
	v->a[42848] = 34;
	v->a[42849] = anon_sym_PIPE;
	v->a[42850] = anon_sym_SEMI_SEMI;
	v->a[42851] = anon_sym_SEMI_AMP;
	v->a[42852] = anon_sym_SEMI_SEMI_AMP;
	v->a[42853] = anon_sym_PIPE_AMP;
	v->a[42854] = anon_sym_AMP_AMP;
	v->a[42855] = anon_sym_PIPE_PIPE;
	v->a[42856] = anon_sym_LT;
	v->a[42857] = anon_sym_GT;
	v->a[42858] = anon_sym_GT_GT;
	v->a[42859] = anon_sym_AMP_GT;
	small_parse_table_2143(v);
}

void	small_parse_table_2143(t_small_parse_table_array *v)
{
	v->a[42860] = anon_sym_AMP_GT_GT;
	v->a[42861] = anon_sym_LT_AMP;
	v->a[42862] = anon_sym_GT_AMP;
	v->a[42863] = anon_sym_GT_PIPE;
	v->a[42864] = anon_sym_LT_AMP_DASH;
	v->a[42865] = anon_sym_GT_AMP_DASH;
	v->a[42866] = anon_sym_LT_LT;
	v->a[42867] = anon_sym_LT_LT_DASH;
	v->a[42868] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42869] = anon_sym_AMP;
	v->a[42870] = aux_sym_concatenation_token1;
	v->a[42871] = anon_sym_DOLLAR;
	v->a[42872] = sym__special_character;
	v->a[42873] = anon_sym_DQUOTE;
	v->a[42874] = sym_raw_string;
	v->a[42875] = aux_sym_number_token1;
	v->a[42876] = aux_sym_number_token2;
	v->a[42877] = anon_sym_DOLLAR_LBRACE;
	v->a[42878] = anon_sym_DOLLAR_LPAREN;
	v->a[42879] = anon_sym_BQUOTE;
	small_parse_table_2144(v);
}

void	small_parse_table_2144(t_small_parse_table_array *v)
{
	v->a[42880] = anon_sym_DOLLAR_BQUOTE;
	v->a[42881] = sym_word;
	v->a[42882] = anon_sym_SEMI;
	v->a[42883] = 3;
	v->a[42884] = actions(3);
	v->a[42885] = 1;
	v->a[42886] = sym_comment;
	v->a[42887] = actions(3066);
	v->a[42888] = 7;
	v->a[42889] = sym_file_descriptor;
	v->a[42890] = sym__concat;
	v->a[42891] = sym_variable_name;
	v->a[42892] = sym_test_operator;
	v->a[42893] = sym__brace_start;
	v->a[42894] = ts_builtin_sym_end;
	v->a[42895] = aux_sym_heredoc_redirect_token1;
	v->a[42896] = actions(3064);
	v->a[42897] = 33;
	v->a[42898] = anon_sym_PIPE;
	v->a[42899] = anon_sym_SEMI_SEMI;
	small_parse_table_2145(v);
}

/* EOF small_parse_table_428.c */

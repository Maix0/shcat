/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_386.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1930(t_small_parse_table_array *v)
{
	v->a[38600] = anon_sym_GT_PIPE;
	v->a[38601] = anon_sym_LT_AMP_DASH;
	v->a[38602] = anon_sym_GT_AMP_DASH;
	v->a[38603] = anon_sym_LT_LT;
	v->a[38604] = anon_sym_LT_LT_DASH;
	v->a[38605] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38606] = anon_sym_AMP;
	v->a[38607] = aux_sym_concatenation_token1;
	v->a[38608] = anon_sym_DOLLAR;
	v->a[38609] = sym__special_character;
	v->a[38610] = anon_sym_DQUOTE;
	v->a[38611] = sym_raw_string;
	v->a[38612] = aux_sym_number_token1;
	v->a[38613] = aux_sym_number_token2;
	v->a[38614] = anon_sym_DOLLAR_LBRACE;
	v->a[38615] = anon_sym_DOLLAR_LPAREN;
	v->a[38616] = anon_sym_BQUOTE;
	v->a[38617] = anon_sym_DOLLAR_BQUOTE;
	v->a[38618] = aux_sym__simple_variable_name_token1;
	v->a[38619] = sym_word;
	small_parse_table_1931(v);
}

void	small_parse_table_1931(t_small_parse_table_array *v)
{
	v->a[38620] = anon_sym_SEMI;
	v->a[38621] = 3;
	v->a[38622] = actions(3);
	v->a[38623] = 1;
	v->a[38624] = sym_comment;
	v->a[38625] = actions(2654);
	v->a[38626] = 6;
	v->a[38627] = sym_file_descriptor;
	v->a[38628] = sym__concat;
	v->a[38629] = sym_variable_name;
	v->a[38630] = sym_test_operator;
	v->a[38631] = sym__brace_start;
	v->a[38632] = aux_sym_heredoc_redirect_token1;
	v->a[38633] = actions(2652);
	v->a[38634] = 34;
	v->a[38635] = anon_sym_PIPE;
	v->a[38636] = anon_sym_RPAREN;
	v->a[38637] = anon_sym_SEMI_SEMI;
	v->a[38638] = anon_sym_PIPE_AMP;
	v->a[38639] = anon_sym_AMP_AMP;
	small_parse_table_1932(v);
}

void	small_parse_table_1932(t_small_parse_table_array *v)
{
	v->a[38640] = anon_sym_PIPE_PIPE;
	v->a[38641] = anon_sym_LT;
	v->a[38642] = anon_sym_GT;
	v->a[38643] = anon_sym_GT_GT;
	v->a[38644] = anon_sym_AMP_GT;
	v->a[38645] = anon_sym_AMP_GT_GT;
	v->a[38646] = anon_sym_LT_AMP;
	v->a[38647] = anon_sym_GT_AMP;
	v->a[38648] = anon_sym_GT_PIPE;
	v->a[38649] = anon_sym_LT_AMP_DASH;
	v->a[38650] = anon_sym_GT_AMP_DASH;
	v->a[38651] = anon_sym_LT_LT;
	v->a[38652] = anon_sym_LT_LT_DASH;
	v->a[38653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38654] = anon_sym_AMP;
	v->a[38655] = aux_sym_concatenation_token1;
	v->a[38656] = anon_sym_DOLLAR;
	v->a[38657] = sym__special_character;
	v->a[38658] = anon_sym_DQUOTE;
	v->a[38659] = sym_raw_string;
	small_parse_table_1933(v);
}

void	small_parse_table_1933(t_small_parse_table_array *v)
{
	v->a[38660] = aux_sym_number_token1;
	v->a[38661] = aux_sym_number_token2;
	v->a[38662] = anon_sym_DOLLAR_LBRACE;
	v->a[38663] = anon_sym_DOLLAR_LPAREN;
	v->a[38664] = anon_sym_BQUOTE;
	v->a[38665] = anon_sym_DOLLAR_BQUOTE;
	v->a[38666] = aux_sym__simple_variable_name_token1;
	v->a[38667] = sym_word;
	v->a[38668] = anon_sym_SEMI;
	v->a[38669] = 5;
	v->a[38670] = actions(3);
	v->a[38671] = 1;
	v->a[38672] = sym_comment;
	v->a[38673] = actions(3521);
	v->a[38674] = 1;
	v->a[38675] = sym__special_character;
	v->a[38676] = state(971);
	v->a[38677] = 1;
	v->a[38678] = aux_sym__literal_repeat1;
	v->a[38679] = actions(3252);
	small_parse_table_1934(v);
}

void	small_parse_table_1934(t_small_parse_table_array *v)
{
	v->a[38680] = 5;
	v->a[38681] = sym_file_descriptor;
	v->a[38682] = sym_variable_name;
	v->a[38683] = sym_test_operator;
	v->a[38684] = sym__brace_start;
	v->a[38685] = aux_sym_heredoc_redirect_token1;
	v->a[38686] = actions(3250);
	v->a[38687] = 33;
	v->a[38688] = anon_sym_esac;
	v->a[38689] = anon_sym_PIPE;
	v->a[38690] = anon_sym_SEMI_SEMI;
	v->a[38691] = anon_sym_SEMI_AMP;
	v->a[38692] = anon_sym_SEMI_SEMI_AMP;
	v->a[38693] = anon_sym_PIPE_AMP;
	v->a[38694] = anon_sym_AMP_AMP;
	v->a[38695] = anon_sym_PIPE_PIPE;
	v->a[38696] = anon_sym_LT;
	v->a[38697] = anon_sym_GT;
	v->a[38698] = anon_sym_GT_GT;
	v->a[38699] = anon_sym_AMP_GT;
	small_parse_table_1935(v);
}

/* EOF small_parse_table_386.c */

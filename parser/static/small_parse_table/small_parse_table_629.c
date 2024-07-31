/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_629.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3145(t_small_parse_table_array *v)
{
	v->a[62900] = actions(3);
	v->a[62901] = 1;
	v->a[62902] = sym_comment;
	v->a[62903] = actions(2566);
	v->a[62904] = 1;
	v->a[62905] = anon_sym_POUND;
	v->a[62906] = actions(2568);
	v->a[62907] = 1;
	v->a[62908] = aux_sym__simple_variable_name_token1;
	v->a[62909] = actions(2570);
	v->a[62910] = 1;
	v->a[62911] = anon_sym_0;
	v->a[62912] = actions(2572);
	v->a[62913] = 1;
	v->a[62914] = sym_variable_name;
	v->a[62915] = actions(2725);
	v->a[62916] = 1;
	v->a[62917] = anon_sym_RBRACE;
	v->a[62918] = state(1626);
	v->a[62919] = 1;
	small_parse_table_3146(v);
}

void	small_parse_table_3146(t_small_parse_table_array *v)
{
	v->a[62920] = sym__expansion_body;
	v->a[62921] = actions(2564);
	v->a[62922] = 6;
	v->a[62923] = anon_sym_BANG;
	v->a[62924] = anon_sym_DASH;
	v->a[62925] = anon_sym_STAR;
	v->a[62926] = anon_sym_QMARK;
	v->a[62927] = anon_sym_DOLLAR;
	v->a[62928] = anon_sym_AT;
	v->a[62929] = 4;
	v->a[62930] = actions(3);
	v->a[62931] = 1;
	v->a[62932] = sym_comment;
	v->a[62933] = actions(2729);
	v->a[62934] = 1;
	v->a[62935] = anon_sym_esac;
	v->a[62936] = actions(2731);
	v->a[62937] = 1;
	v->a[62938] = sym_extglob_pattern;
	v->a[62939] = actions(2727);
	small_parse_table_3147(v);
}

void	small_parse_table_3147(t_small_parse_table_array *v)
{
	v->a[62940] = 10;
	v->a[62941] = anon_sym_LPAREN;
	v->a[62942] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62943] = anon_sym_DOLLAR;
	v->a[62944] = anon_sym_DQUOTE;
	v->a[62945] = sym_raw_string;
	v->a[62946] = sym_number;
	v->a[62947] = anon_sym_DOLLAR_LBRACE;
	v->a[62948] = anon_sym_DOLLAR_LPAREN;
	v->a[62949] = anon_sym_BQUOTE;
	v->a[62950] = sym_word;
	v->a[62951] = 3;
	v->a[62952] = actions(407);
	v->a[62953] = 1;
	v->a[62954] = sym_comment;
	v->a[62955] = actions(1899);
	v->a[62956] = 4;
	v->a[62957] = anon_sym_PIPE;
	v->a[62958] = anon_sym_LT;
	v->a[62959] = anon_sym_GT;
	small_parse_table_3148(v);
}

void	small_parse_table_3148(t_small_parse_table_array *v)
{
	v->a[62960] = anon_sym_LT_LT;
	v->a[62961] = actions(1897);
	v->a[62962] = 8;
	v->a[62963] = anon_sym_AMP_AMP;
	v->a[62964] = anon_sym_PIPE_PIPE;
	v->a[62965] = anon_sym_GT_GT;
	v->a[62966] = anon_sym_LT_AMP;
	v->a[62967] = anon_sym_GT_AMP;
	v->a[62968] = anon_sym_GT_PIPE;
	v->a[62969] = anon_sym_LT_GT;
	v->a[62970] = anon_sym_LT_LT_DASH;
	v->a[62971] = 10;
	v->a[62972] = actions(3);
	v->a[62973] = 1;
	v->a[62974] = sym_comment;
	v->a[62975] = actions(2548);
	v->a[62976] = 1;
	v->a[62977] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62978] = actions(2554);
	v->a[62979] = 1;
	small_parse_table_3149(v);
}

void	small_parse_table_3149(t_small_parse_table_array *v)
{
	v->a[62980] = sym_string_content;
	v->a[62981] = actions(2556);
	v->a[62982] = 1;
	v->a[62983] = anon_sym_DOLLAR_LBRACE;
	v->a[62984] = actions(2558);
	v->a[62985] = 1;
	v->a[62986] = anon_sym_DOLLAR_LPAREN;
	v->a[62987] = actions(2560);
	v->a[62988] = 1;
	v->a[62989] = anon_sym_BQUOTE;
	v->a[62990] = actions(2733);
	v->a[62991] = 1;
	v->a[62992] = anon_sym_DOLLAR;
	v->a[62993] = actions(2735);
	v->a[62994] = 1;
	v->a[62995] = anon_sym_DQUOTE;
	v->a[62996] = state(1370);
	v->a[62997] = 1;
	v->a[62998] = aux_sym_string_repeat1;
	v->a[62999] = state(1477);
	small_parse_table_3150(v);
}

/* EOF small_parse_table_629.c */
